//2016/2/17 13:46:52；在电气火灾基础上修改，适合于火灾报警系统
//本文件适用于显示和打印


#ifndef _EVENT_H_
#define _EVENT_H_

#ifdef EVENT_PRIVATE
	#define EVENT_PUBLIC     
#else
	#define EVENT_PUBLIC extern
#endif
	
#define CIRCLE_MARK   55  
#define TRIANGLE_MARK   66
	
	
#define EVENT_ALL_COUNT          20480   //最大事件存储数量
#define EVENT_ALARM_COUNT        4096
#define EVENT_FAULT_COUNT        10000

#define EVENT_LINK_COUNT       	 2048
#define EVENT_SUPERVISE_COUNT    2048	

EVENT_PUBLIC SYSTEM_EVENT EventRamBuffer[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM"))); //事件在RAM中的存储，打印、显示等任务处理均在此区数据
EVENT_PUBLIC U8  EventRamType[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM")));   //事件类型在RAM中的存储，打印、显示等任务处理均在此区数据	

EVENT_PUBLIC SYSTEM_EVENT EventRecordBuffer[EVENT_ALL_COUNT + 1] __attribute__ ((section ("EXRAM"))); //事件在RAM中的存储，打印、显示等任务处理均在此区数据
	
EVENT_PUBLIC SYSTEM_EVENT EventFireRamBuffer[EVENT_ALARM_COUNT + 1] __attribute__ ((section ("EXRAM")));//存放所有火警事件
EVENT_PUBLIC SYSTEM_EVENT EventFaultRamBuffer[EVENT_FAULT_COUNT + 1] __attribute__ ((section ("EXRAM")));//存放所有故障事件
EVENT_PUBLIC SYSTEM_EVENT EventLinktRamBuffer[EVENT_LINK_COUNT + 1] __attribute__ ((section ("EXRAM")));//存放所有屏蔽事件
EVENT_PUBLIC SYSTEM_EVENT EventSuperviseRamBuffer[EVENT_SUPERVISE_COUNT + 1] __attribute__ ((section ("EXRAM")));//存放所有监管事件

EVENT_PUBLIC SYSTEM_EVENT EventFireRecordRamBuffer[ EVENT_ALARM_COUNT+ 1] __attribute__ ((section ("EXRAM")));//存放所有火警查询记录事件
EVENT_PUBLIC char building_position_table[1024][25] __attribute__ ((section ("EXRAM")));	//楼号位置对照表信息

EVENT_PUBLIC U16 EventFireRecordRamCurrentPointer;			//火警记录RAM指针


EVENT_PUBLIC U16 EventFireRamCurrentPointer;			//火警RAM指针
EVENT_PUBLIC U16 EventFaultRamCurrentPointer;			
EVENT_PUBLIC U16 EventLinkRamCurrentPointer;			//监管RAM指针
EVENT_PUBLIC U16 EventSuperviseRamCurrentPointer;       //监管RAM指针

	
EVENT_PUBLIC U16 EventFlashBasePointer;         //本次启动事件记录指针
EVENT_PUBLIC U16 EventFlashCurrentPointer;      //事件当前记录指针

EVENT_PUBLIC U16 EventRamCurrentPointer;        //RAM记录指针
	
EVENT_PUBLIC U16 EventRecordCurrentPointer;        //RAM记录指针
	
EVENT_PUBLIC U16 EventRamPrinterPointer;        //打印指针
EVENT_PUBLIC U16 EventRamTaskPointer;           //显示、声音等指针
EVENT_PUBLIC U16 EventRamLinkPointer;           //联动指针


EVENT_PUBLIC U16 EventFlashAlarmBasePointer;
EVENT_PUBLIC U16 EventFlashAlarmCurrentPointer;

//-----------------------------------------------------------------------------
EVENT_PUBLIC U16 EventAlarmCount;       //报警总数
EVENT_PUBLIC U16 EventFaultCount;       //故障总数
EVENT_PUBLIC U16 EventStartCount;       //启动总数
EVENT_PUBLIC U16 EventFeedBackCount;    //反馈总数
EVENT_PUBLIC U16 LinkDelayCount;        //延时总数


EVENT_PUBLIC U16 EventSoundLightFaultCount;       //声光故障总数
EVENT_PUBLIC U16 EventSoundLightStartCount;       //声光启动总数


EVENT_PUBLIC U16 EventModuleCount ;
EVENT_PUBLIC U16 EventHaveStart ;		//有过启动
EVENT_PUBLIC U16 EventSuperviseCount;   //监管个数

EVENT_PUBLIC U8 EventSoundState;	//声音状态
EVENT_PUBLIC U8 EventSwitchTimer;   //事件切换定时，30秒无按键，自动返回高优先级事件


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

static __inline U16 GetSuperviseCount(void)   //获得监管个数
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



//共15种事件类型
#define EVENT_TYPE_ANY 			        0   //
#define EVENT_TYPE_ALARM 			    1   //报警事件
#define EVENT_TYPE_FAULT			    2   //故障
#define EVENT_TYPE_FAULT_RESUME	        3   //故障恢复
#define EVENT_TYPE_SYSTEM			    4   //系统
#define EVENT_TYPE_START			    5   //启动
#define EVENT_TYPE_STOP 			    6   //停止
#define EVENT_TYPE_FEEDBACK			    7   //反馈
#define EVENT_TYPE_FEEDBACK_CANCLE      8   //反馈撤销
#define EVENT_TYPE_DISABLE              9   //屏蔽
#define EVENT_TYPE_DISABLE_CANCLE       10  //屏蔽解除
#define EVENT_TYPE_SUPERVISE            11  //监管
#define EVENT_TYPE_SUPERVISE_CANCLE     12  //监管解除
#define EVENT_TYPE_DELAY                13  //延时开始
#define EVENT_TYPE_OTHER                14  //其他事件
#define EVENT_TYPE_START_FEEDBACK		15	//启动反馈事件用于同时取出这两类事件
#define EVENT_TYPE_SILENCE				16	//消音


typedef struct
{
	U8 Type;					//事件类型，报警、故障等，根据事件类型不同做不同的处理方式
	U8 TransferPriority;		//传输优先级，见《communication.h》
	U8 MatchEventCode;          //匹配事件码，0xff：无匹配事件。如“接地故障恢复”匹配“接地故障”等
	U8 ParameterNumber;		    //参数个数，如报警事件有机号、回路号、地址号3个参数；回路短路有机号、回路号2个参数	
	U8 Caption[26];			    //事件描述
}EVENT_CONST;


typedef struct
{
	char Caption[20];	    //事件名称:火警
	char Date[12];		    //日期:2016-03-21
	char Time[12];          //时间:18:20:20
	char Location[20];	    //线路位置:0001机01回路001号
	char Buiding[30];	    //地理位置:0001楼01层001区
	char DeviceName[25];	//设备名称:手动报警按钮
	char DeviceCaption[40];	//安装位置:
}EVENT_INF;

//查询事件类型
EVENT_PUBLIC unsigned char q_type;
//查询事件的时间范围	
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


//对外接口函数
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


