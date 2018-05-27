#include "serial.h"

HANDLE hCom;
//串口初始化
cWinThread*m_pThread;
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
	TimeOuts.ReadIntervalTimeout = MAXDWORD;
	TimeOuts.ReadTotalTimeoutMultiplier = 0;
	TimeOuts.ReadTotalTimeoutConstant = 0;
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

	PurgeComm(hCom, PURGE_TXCLEAR|PURGE_RXCLEAR);
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
		    GetOverlappedResult
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
