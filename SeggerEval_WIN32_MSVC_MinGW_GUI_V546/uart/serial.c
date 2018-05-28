#include "serial.h"unsigned char serial_revbuff[2048];unsigned int Serial_RevPointer = 0;
//�̴߳���
HANDLE hCom;    // �̴߳���HANDLE Serial_HRead,Serial_HWrite;DWORD WINAPI Thread_SerialWrite(LPVOID lpParameter){    char outputData[100]={0x00};//������ݻ���    if( hCom==INVALID_HANDLE_VALUE )    {       // puts("�򿪴���ʧ��");        return 0;    }    DWORD strLength = 0;    while(1)    {        for(int i=0;i<100;i++)        {            outputData[i]=0;        }        strLength = strlen(outputData);        WriteFile(  hCom,outputData,strLength,&strLength,NULL); // ���ڷ����ַ���        PurgeComm(hCom,PURGE_TXCLEAR|PURGE_RXCLEAR);            //��ջ�����        Sleep(100);    }    return 0;}void Rev_Task(void) //�������ݴ�����{    if(Serial_RevPointer !=0)    {        if(Serial_RevPointer >= (serial_revbuff[1] + serial_revbuff[2]*256))        {        }    }}DWORD WINAPI Thread_SerialRead(LPVOID lpParameter){    DWORD dwErrors;//������Ϣ    COMSTAT Rcs;//COMSTAT�ṹ��ͨ���豸�ĵ�ǰ��Ϣ    int Len = 0;    DWORD length;//�������ն�ȡ���ֽ���    DWORD  lpEvtMask;    if(hCom == INVALID_HANDLE_VALUE)    {        return 0;    }    memset(serial_revbuff,0,sizeof(serial_revbuff));    while(1)    {        OVERLAPPED osWait;        memset(&osWait,0,sizeof(OVERLAPPED));        osWait.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);        DWORD dwEvtMask;        if(WaitCommEvent(hCom,&dwEvtMask,&osWait))        {            if(dwEvtMask & EV_RXCHAR)            {                DWORD dwError;                COMSTAT cs;                if (!ClearCommError(hCom, &dwError, &cs))                {                    //AfxMessageBox(_T("ClearCommError() failed"));                    CloseHandle(hCom);                    return 0;                }                char buf[101] = {0};                DWORD nLenOut = 0;                DWORD dwTrans;                OVERLAPPED osRead;                memset(&osRead,0,sizeof(OVERLAPPED));                osRead.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);                BOOL bReadStatus = ReadFile(hCom, buf, cs.cbInQue, &nLenOut,&osRead);                memcpy(serial_revbuff,buf,nLenOut);                if(Serial_RevPointer < MAX_SERAIL_LENGHT)                {                   Serial_RevPointer += nLenOut;                }                else                {                   Serial_RevPointer = 0;                }                 Rev_Task();                if(!bReadStatus)                {                   if(GetLastError()==ERROR_IO_PENDING)//�ص��������ڽ���                   {                   }                }                else{ //���������                }            }        }        else{                if(GetLastError()==ERROR_IO_PENDING)                {                    WaitForSingleObject(osWait.hEvent, INFINITE);                    if(dwEvtMask&EV_RXCHAR)                    {                        DWORD dwError;                        COMSTAT cs;                        if(!ClearCommError(hCom, &dwError, &cs))                        {                            CloseHandle(hCom);                            return 0;                        }                        char buf[101] = {0};                        DWORD nLenOut = 0;                        DWORD dwTrans;                        OVERLAPPED osRead;                        memset(&osRead,0,sizeof(OVERLAPPED));                        osRead.hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);                        BOOL bReadStatus = ReadFile(hCom, buf, cs.cbInQue, &nLenOut,&osRead);                        memcpy(serial_revbuff,buf,nLenOut);                       if(Serial_RevPointer < MAX_SERAIL_LENGHT)                        {                           Serial_RevPointer += nLenOut;                        }                        else                        {                            Serial_RevPointer = 0;                        }                         Rev_Task();                        if(!bReadStatus)                        {                           if(GetLastError()==ERROR_IO_PENDING)//�ص��������ڽ���                           {                           }                        }                        else                        {                        }                    }                }        }    }       // Sleep(100);    return 0;}
//���ڳ�ʼ��
void serial_init(void)
{
    hCom=CreateFile("COM1",//COM1��
		GENERIC_READ|GENERIC_WRITE, //�������д
		0, //��ռ��ʽ
		NULL,
		OPEN_EXISTING, //�򿪶����Ǵ���
		FILE_ATTRIBUTE_NORMAL|FILE_FLAG_OVERLAPPED, //�ص���ʽ
		NULL);
	if (hCom == INVALID_HANDLE_VALUE)
	{
		//AfxMessageBox("��COMʧ��!");
		return FALSE;
	}

	SetupComm(hCom, 1024, 1024); //���뻺����������������Ĵ�С����100

	COMMTIMEOUTS TimeOuts;
	//�趨����ʱ
	TimeOuts.ReadIntervalTimeout = 1000;
	TimeOuts.ReadTotalTimeoutMultiplier = 500;
	TimeOuts.ReadTotalTimeoutConstant = 5000;
	//�ڶ�һ�����뻺���������ݺ���������������أ�
	//�������Ƿ������Ҫ����ַ���


	//�趨д��ʱ
	TimeOuts.WriteTotalTimeoutMultiplier = 100;
	TimeOuts.WriteTotalTimeoutConstant = 500;
	SetCommTimeouts(hCom, &TimeOuts); //���ó�ʱ

	DCB dcb;
	GetCommState(hCom, &dcb);
	dcb.BaudRate = 115200; //������Ϊ9600
	dcb.ByteSize = 8; //ÿ���ֽ���8λ
	dcb.Parity = NOPARITY; //����żУ��λ
	dcb.StopBits = TWOSTOPBITS; //����ֹͣλ
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
//���ڽ������ݳ�ʼ��
void serial_rec(void)
{
	OVERLAPPED m_osRead;
    COMSTAT ComStat;
	DWORD dwErrorFlags;
    DWORD dwBytesRead=100;//��ȡ���ֽ���
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
	        //GetLastError()��������ERROR_IO_PENDING,�����������ڽ��ж�����
		{
		    //GetOverlappedResult
			WaitForSingleObject(m_osRead.hEvent, 2000);
		    //ʹ��WaitForSingleObject�����ȴ���ֱ����������ɻ���ʱ�Ѵﵽ2����
		    //�����ڶ�����������Ϻ�m_osRead��hEvent�¼����Ϊ���ź�
		}
	}

	PurgeComm(hCom, PURGE_TXABORT|PURGE_RXABORT|PURGE_TXCLEAR|PURGE_RXCLEAR);
	//m_disp = str;
	//UpdateData(FALSE);

}
//�رմ���
void Close_Serial(void)
{
     CloseHandle(hCom);
}
