//2016/2/17 13:46:52���ڵ������ֻ������޸ģ��ʺ��ڻ��ֱ���ϵͳ
//���ļ���������ʾ�ʹ�ӡ


#ifndef _EVENT_H_
#define _EVENT_H_

#ifdef EVENT_PRIVATE
	#define EVENT_PUBLIC     
#else
	#define EVENT_PUBLIC extern
#endif
	
#define CIRCLE_MARK   55  
#define TRIANGLE_MARK   66
	
	
#define EVENT_ALL_COUNT          20480   //����¼��洢����
#define EVENT_ALARM_COUNT        4096
#define EVENT_FAULT_COUNT        10000

#define EVENT_LINK_COUNT       	 2048
#define EVENT_SUPERVISE_COUNT    2048	

EVENT_PUBLIC SYSTEM_EVENT EventRamBuffer[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM"))); //�¼���RAM�еĴ洢����ӡ����ʾ����������ڴ�������
EVENT_PUBLIC U8  EventRamType[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM")));   //�¼�������RAM�еĴ洢����ӡ����ʾ����������ڴ�������	

EVENT_PUBLIC SYSTEM_EVENT EventRecordBuffer[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM"))); //�¼���RAM�еĴ洢����ӡ����ʾ����������ڴ�������
	
EVENT_PUBLIC SYSTEM_EVENT EventFireRamBuffer[EVENT_ALARM_COUNT + 1] __attribute__ ((section ("EXRAM")));//������л��¼�
EVENT_PUBLIC SYSTEM_EVENT EventFaultRamBuffer[EVENT_FAULT_COUNT + 1] __attribute__ ((section ("EXRAM")));//������й����¼�
EVENT_PUBLIC SYSTEM_EVENT EventLinktRamBuffer[EVENT_LINK_COUNT + 1] __attribute__ ((section ("EXRAM")));//������������¼�
EVENT_PUBLIC SYSTEM_EVENT EventSuperviseRamBuffer[EVENT_SUPERVISE_COUNT + 1] __attribute__ ((section ("EXRAM")));//������м���¼�

EVENT_PUBLIC SYSTEM_EVENT EventFireRecordRamBuffer[ EVENT_ALARM_COUNT+ 1] __attribute__ ((section ("EXRAM")));//������л𾯲�ѯ��¼�¼�
EVENT_PUBLIC char building_position_table[1024][25] __attribute__ ((section ("EXRAM")));	//¥��λ�ö��ձ���Ϣ

EVENT_PUBLIC U16 EventFireRecordRamCurrentPointer;			//�𾯼�¼RAMָ��


EVENT_PUBLIC U16 EventFireRamCurrentPointer;			//��RAMָ��
EVENT_PUBLIC U16 EventFaultRamCurrentPointer;			
EVENT_PUBLIC U16 EventLinkRamCurrentPointer;			//���RAMָ��
EVENT_PUBLIC U16 EventSuperviseRamCurrentPointer;       //���RAMָ��

	
EVENT_PUBLIC U16 EventFlashBasePointer;         //���������¼���¼ָ��
EVENT_PUBLIC U16 EventFlashCurrentPointer;      //�¼���ǰ��¼ָ��

EVENT_PUBLIC U16 EventRamCurrentPointer;        //RAM��¼ָ��
	
EVENT_PUBLIC U16 EventRecordCurrentPointer;        //RAM��¼ָ��
	
EVENT_PUBLIC U16 EventRamPrinterPointer;        //��ӡָ��
EVENT_PUBLIC U16 EventRamTaskPointer;           //��ʾ��������ָ��
EVENT_PUBLIC U16 EventRamLinkPointer;           //����ָ��


EVENT_PUBLIC U16 EventFlashAlarmBasePointer;
EVENT_PUBLIC U16 EventFlashAlarmCurrentPointer;

//-----------------------------------------------------------------------------
EVENT_PUBLIC U16 EventAlarmCount;       //��������
EVENT_PUBLIC U16 EventFaultCount;       //��������
EVENT_PUBLIC U16 EventStartCount;       //��������
EVENT_PUBLIC U16 EventFeedBackCount;    //��������
EVENT_PUBLIC U16 LinkDelayCount;        //��ʱ����


EVENT_PUBLIC U16 EventSoundLightFaultCount;       //�����������
EVENT_PUBLIC U16 EventSoundLightStartCount;       //������������


EVENT_PUBLIC U16 EventModuleCount ;
EVENT_PUBLIC U16 EventHaveStart ;		//�й�����
EVENT_PUBLIC U16 EventSuperviseCount;   //��ܸ���

EVENT_PUBLIC U8 EventSoundState;	//����״̬
EVENT_PUBLIC U8 EventSwitchTimer;   //�¼��л���ʱ��30���ް������Զ����ظ����ȼ��¼�


static __inline U16 GetEventAlarmCount(void)
{
    return EventAlarmCount;
}

static __inline U16 GetEventFaultCount(void)
{
    return EventFaultCount;
}

static __inline U16 GetEventStartCount(void)
{
    return EventStartCount;
}

static __inline U16 GetEventFeedBackCount(void)
{
    return EventFeedBackCount;
}

static __inline U16 GetSuperviseCount(void)   //��ü�ܸ���
{
    return EventSuperviseCount;
}

static __inline U16 GetLinkDelayCount(void)
{
    return LinkDelayCount;
}

static __inline U16 GetEventRamCurrentPointer(void)
{
    return EventRamCurrentPointer;
}
//-----------------------------------------------------------------------------



//��15���¼�����
#define EVENT_TYPE_ANY 			        0   //
#define EVENT_TYPE_ALARM 			    1   //�����¼�
#define EVENT_TYPE_FAULT			    2   //����
#define EVENT_TYPE_FAULT_RESUME	        3   //���ϻָ�
#define EVENT_TYPE_SYSTEM			    4   //ϵͳ
#define EVENT_TYPE_START			    5   //����
#define EVENT_TYPE_STOP 			    6   //ֹͣ
#define EVENT_TYPE_FEEDBACK			    7   //����
#define EVENT_TYPE_FEEDBACK_CANCLE      8   //��������
#define EVENT_TYPE_DISABLE              9   //����
#define EVENT_TYPE_DISABLE_CANCLE       10  //���ν��
#define EVENT_TYPE_SUPERVISE            11  //���
#define EVENT_TYPE_SUPERVISE_CANCLE     12  //��ܽ��
#define EVENT_TYPE_DELAY                13  //��ʱ��ʼ
#define EVENT_TYPE_OTHER                14  //�����¼�
#define EVENT_TYPE_START_FEEDBACK		15	//���������¼�����ͬʱȡ���������¼�
#define EVENT_TYPE_SILENCE				16	//����


typedef struct
{
	U8 Type;					//�¼����ͣ����������ϵȣ������¼����Ͳ�ͬ����ͬ�Ĵ���ʽ
	U8 TransferPriority;		//�������ȼ�������communication.h��
	U8 MatchEventCode;          //ƥ���¼��룬0xff����ƥ���¼����硰�ӵع��ϻָ���ƥ�䡰�ӵع��ϡ���
	U8 ParameterNumber;		    //�����������籨���¼��л��š���·�š���ַ��3����������·��·�л��š���·��2������	
	U8 Caption[26];			    //�¼�����
}EVENT_CONST;


typedef struct
{
	char Caption[20];	    //�¼�����:��
	char Date[12];		    //����:2016-03-21
	char Time[12];          //ʱ��:18:20:20
	char Location[20];	    //��·λ��:0001��01��·001��
	char Buiding[30];	    //����λ��:0001¥01��001��
	char DeviceName[25];	//�豸����:�ֶ�������ť
	char DeviceCaption[40];	//��װλ��:
}EVENT_INF;

//��ѯ�¼�����
EVENT_PUBLIC unsigned char q_type;
//��ѯ�¼���ʱ�䷶Χ	
typedef struct 
{
	unsigned char  sta_year;
	unsigned char  sta_month;
	unsigned char  sta_day;
	unsigned char  sta_hour;
	unsigned char  sta_minute;
	unsigned char  sta_second;
	
	unsigned char  end_year;
	unsigned char  end_month;
	unsigned char  end_day;
	unsigned char  end_hour;
	unsigned char  end_minute;
	unsigned char  end_second;	
}QTime;


EVENT_PUBLIC QTime q_time;


//����ӿں���
void WriteEventToFlash(SYSTEM_EVENT *pEvent);
void EventInit(void);
void EventTask(void);
void EventLedSoundDisplayProcess(U8 EventType);
U8 GetRamNewEventType(void);
SYSTEM_EVENT * GetRamEvent(U16 EventIndex,U8 EventType);
void GetRamEventCaption(EVENT_INF *EventCaption,U16 EventIndex,U8 EventType);
void GetRamPrintEventCaption(EVENT_INF *EventInf,U16 EventIndex,U8 EventType);
void GetFlashEventCaption(QTime *ptime,U8 EventType);
void EventAnalysis(EVENT_INF *EventInf,SYSTEM_EVENT *pEvent);
U16 GetEventCount(U8 EventType);
SYSTEM_EVENT * GetRamNewEvent(U16 EventIndex,U8 EventType);
void GetFlashEventTime(QTime *ptime) ;
void GetFlashFireEventCaption(void);
void GetFlashShieldEventCaption(void);
void BuildingPositionTableInit(void);

#endif


