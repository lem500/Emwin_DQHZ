#include "serial.h"unsigned char serial_revbuff[2048];unsigned int Serial_RevPointer = 0;
//线程创建
HANDLE hCom;    // 线程创建HANDLE Serial_HRead,Serial_HWrite;DWORD WINAPI Thread_SerialWrite(LPVOID lpParameter){    char outputData[100]={0x00};//输出数据缓存    if( hCom==INVALID_HANDLE_VALUE )    {       // puts("打开串口失败");        return 0;    }    DWORD strLength = 0;    while(1)    {        for(int i=0;i<100;i++)        {            outputData[i]=0;        }        strLength = strlen(outputData);        WriteFile(  hCom,outputData,strLength,&strLength,NULL); // 串口发送字符串        PurgeComm(hCom,PURGE_TXCLEAR|PURGE_RXCLEAR);            //清空缓冲区        Sleep(100);    }    return 0;}void Rev_Task(void) //串口数据处理函数{    if(Serial_RevPointer !=0)    {        if(Serial_RevPointer >= (serial_revbuff[1] + serial_revbuff[2]*256))        {        }    }}DWORD WINAPI Thread_SerialRead(LPVOID lpParameter){    DWORD dwErrors;//错误信息    COMSTAT Rcs;//COMSTAT结构体通信设备的当前信息    int Len = 0;    DWORD length;//用来接收读取的字节数    DWORD  lpEvtMask;    if(hCom == INVALID_HANDLE_VALUE)    {        return 0;    }    memset(serial_revbuff,0,sizeof(serial_revbuff));    while(1)    {        OVERLAPPED osWait;        memset(&osWait,0,sizeof(OVERLAPPED));        osWait.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);        DWORD dwEvtMask;        if(WaitCommEvent(hCom,&dwEvtMask,&osWait))        {            if(dwEvtMask & EV_RXCHAR)            {                DWORD dwError;                COMSTAT cs;                if (!ClearCommError(hCom, &dwError, &cs))                {                    //AfxMessageBox(_T("ClearCommError() failed"));                    CloseHandle(hCom);                    return 0;                }                char buf[101] = {0};                DWORD nLenOut = 0;                DWORD dwTrans;                OVERLAPPED osRead;                memset(&osRead,0,sizeof(OVERLAPPED));                osRead.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);                BOOL bReadStatus = ReadFile(hCom, buf, cs.cbInQue, &nLenOut,&osRead);                memcpy(serial_revbuff,buf,nLenOut);                if(Serial_RevPointer < MAX_SERAIL_LENGHT)                {                   Serial_RevPointer += nLenOut;                }                else                {                   Serial_RevPointer = 0;                }                 Rev_Task();                if(!bReadStatus)                {                   if(GetLastError()==ERROR_IO_PENDING)//重叠操作正在进行                   {                   }                }                else{ //操作已完成                }            }        }        else{                if(GetLastError()==ERROR_IO_PENDING)                {                    WaitForSingleObject(osWait.hEvent, INFINITE);                    if(dwEvtMask&EV_RXCHAR)                    {                        DWORD dwError;                        COMSTAT cs;                        if(!ClearCommError(hCom, &dwError, &cs))                        {                            CloseHandle(hCom);                            return 0;                        }                        char buf[101] = {0};                        DWORD nLenOut = 0;                        DWORD dwTrans;                        OVERLAPPED osRead;                        memset(&osRead,0,sizeof(OVERLAPPED));                        osRead.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);                        BOOL bReadStatus = ReadFile(hCom, buf, cs.cbInQue, &nLenOut,&osRead);                        memcpy(serial_revbuff,buf,nLenOut);                       if(Serial_RevPointer < MAX_SERAIL_LENGHT)                        {                           Serial_RevPointer += nLenOut;                        }                        else                        {                            Serial_RevPointer = 0;                        }                         Rev_Task();                        if(!bReadStatus)                        {                           if(GetLastError()==ERROR_IO_PENDING)//重叠操作正在进行                           {                           }                        }                        else                        {                        }                    }                }        }    }       // Sleep(100);    return 0;}
//串口初始化
void serial_init(void)
{
    hCom=CreateFile("COM1",//COM1口
		GENERIC_READ|GENERIC_WRITE, //允许读和写
		0, //独占方式
		NULL,
		OPEN_EXISTING, //打开而不是创建
		FILE_ATTRIBUTE_NORMAL|FILE_FLAG_OVERLAPPED, //重叠方式
		NULL);
	if (hCom == INVALID_HANDLE_VALUE)
	{
		//AfxMessageBox("打开COM失败!");
		return FALSE;
	}

	SetupComm(hCom, 1024, 1024); //输入缓冲区和输出缓冲区的大小都是100

	COMMTIMEOUTS TimeOuts;
	//设定读超时
	TimeOuts.ReadIntervalTimeout = 1000;
	TimeOuts.ReadTotalTimeoutMultiplier = 500;
	TimeOuts.ReadTotalTimeoutConstant = 5000;
	//在读一次输入缓冲区的内容后读操作就立即返回，
	//而不管是否读入了要求的字符。


	//设定写超时
	TimeOuts.WriteTotalTimeoutMultiplier = 100;
	TimeOuts.WriteTotalTimeoutConstant = 500;
	SetCommTimeouts(hCom, &TimeOuts); //设置超时

	DCB dcb;
	GetCommState(hCom, &dcb);
	dcb.BaudRate = 115200; //波特率为9600
	dcb.ByteSize = 8; //每个字节有8位
	dcb.Parity = NOPARITY; //无奇偶校验位
	dcb.StopBits = TWOSTOPBITS; //两个停止位
	SetCommState(hCom, &dcb);

	PurgeComm(hCom, PURGE_TXCLEAR|PURGE_RXCLEAR);	SetCommMask(hCom,EV_RXCHAR);    Serial_HWrite = CreateThread(NULL,0,Thread_SerialWrite,NULL,0,NULL);    Serial_HRead  = CreateThread(NULL,0,Thread_SerialRead,NULL,0,NULL);
}
void serail_send(unsigned char *data,unsigned char len)
{
    	OVERLAPPED m_osWrite;
        COMSTAT ComStat;
	    DWORD dwErrorFlags;
	    BOOL bWriteStat;
	    DWORD dwBytesWrite = len;
	    memset(&m_osWrite,0,sizeof(OVERLAPPED));
	    m_osWrite.hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);

	    ClearCommError(hCom, &dwErrorFlags, &ComStat);
	    bWriteStat = WriteFile(hCom,data,dwBytesWrite,& dwBytesWrite,&m_osWrite);

        if (!bWriteStat)
	    {
		  if(GetLastError() == ERROR_IO_PENDING)
		  {
			WaitForSingleObject(m_osWrite.hEvent, 1000);
		  }
	    }
}
//串口接收数据初始化
void serial_rec(void)
{
	OVERLAPPED m_osRead;
    COMSTAT ComStat;
	DWORD dwErrorFlags;
    DWORD dwBytesRead=100;//读取的字节数
	BOOL bReadStat;
    static char str[100];
	memset(&m_osRead,0,sizeof(OVERLAPPED));
	m_osRead.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);
	ClearCommError(hCom,&dwErrorFlags,&ComStat);
	dwBytesRead = min(dwBytesRead, (DWORD)ComStat.cbInQue);
	bReadStat = ReadFile(hCom,str,dwBytesRead,&dwBytesRead,&m_osRead);
	if(!bReadStat)
	{
		if(GetLastError()==ERROR_IO_PENDING)
	        //GetLastError()函数返回ERROR_IO_PENDING,表明串口正在进行读操作
		{
		    //GetOverlappedResult
			WaitForSingleObject(m_osRead.hEvent, 2000);
		    //使用WaitForSingleObject函数等待，直到读操作完成或延时已达到2秒钟
		    //当串口读操作进行完毕后，m_osRead的hEvent事件会变为有信号
		}
	}

	PurgeComm(hCom, PURGE_TXABORT|PURGE_RXABORT|PURGE_TXCLEAR|PURGE_RXCLEAR);
	//m_disp = str;
	//UpdateData(FALSE);

}
//关闭串口
void Close_Serial(void)
{
     CloseHandle(hCom);
}
