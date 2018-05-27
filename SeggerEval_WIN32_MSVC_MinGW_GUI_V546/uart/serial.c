#include "serial.h"

HANDLE hCom;
//���ڳ�ʼ��
cWinThread*m_pThread;
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
	TimeOuts.ReadIntervalTimeout = MAXDWORD;
	TimeOuts.ReadTotalTimeoutMultiplier = 0;
	TimeOuts.ReadTotalTimeoutConstant = 0;
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
		    GetOverlappedResult
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
