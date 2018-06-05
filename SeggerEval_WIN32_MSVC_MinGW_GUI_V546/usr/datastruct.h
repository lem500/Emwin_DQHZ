#ifndef _DATASTRUCT_H#define _DATASTRUCT_H//宏定义#include "mygui_init.h"//系统配置数据结构，256BYTEStypedef struct{	U8	Level_1_Password[8];    //一级密码     1111	U8	Level_2_Password[8];    //二级密码     2222	U8	Level_3_Password[8];    //三级密码     3333	U8	R1[8];    				//数组备用	U8	R2[8];    				//数组备用	U8	R3[8];    				//数组备用   48	U16	ControllerID;           //机号         1    U16 IP_Port;                //服务器端口号 0	U16	R16_1;           		//16位备用     1    U16 R16_2;                	//16位备用     0	U16	R16_3;           		//16位备用     1    U16 R16_4;                	//16位备用     0	U16	R16_5;           		//16位备用     1    U16 R16_6;                	//16位备用   16  0	U8	Printer;       			//实时打印     bit0:全部bit1:火警bit2:联动bit3:故障bit4:其他	U8	AutoControl;            //自动控制	U8	ManulControl;           //手动控制	U8  SoundControl;           //联动输出声光是否受自动影响	U8	CRTConnect;          	//CRT通讯，对应火警传输 bit3      bit2 1屏蔽 0正常    bit1    bit0	U8	CRTMode;          		//CRT模式    U8  IP_Mode;                //IP模式      0    U8  IP_Reserve;             //IP保留      0	U8  SoundStatus;            //声光标志 BIT0,0-不存在，1-存在；BIT1,1-屏蔽，0-正常；	U8  BroadSoundSwitch;		//广播声光切换允许	U8  BroadPanelAddess;		//广播盘地址	U8  BroadTimer;				//广播时间	U8  SoundTimer;				//声光时间	U8	BroadTrigger;			//几个火警触发广播取值范围1~5	U8	BroadAutoLimit;			//广播是否受自动状态限制0:不受限制1:受限制	U8	BuildingPosition;		//楼号位置对照表设置0:不以楼号位置对照表的方式显示1:以楼号位置对照表的方式显示    U8  Reserve2[176];          //保留}SYSTEM_CONFIG;/******************************事件部分**********************************************///事件//事件数据结构，64BYTES#pragma pack(1)typedef struct{	U8	EventVersion;    	//事件版本号；本版值为1   	//1 ~ 255	U8	EventCode;       	//事件代码，255无效代码   		//0 ~ 254	U16	EventControllerID; 	//机号                    						//1 ~ 1023	U8	EventLoopPanelID;   //回路、盘号               				//1 ~ 64	U8	EventAddress;    	//地址号                  					//1 ~ 255	U8	EventChannel;    	//通道号	U8	EventReserve1;   	//启动事件中标记圆圈符号用	U8	EventDeviceType; 	//设备类型                					//0 ~ 255	U8	PanelCardType;   	//盘、回路卡等类型	U16	EventAlarmValue; 	//报警值	U8	EventReserve2;		//反馈事件标记三角符号用	U8	EventReserve3;		//	U16	EventBuilding;   	//楼                      						//0 ~ 1023	U8	EventFloor;      	//层                      						//-9 ~ 127	U8	EventZone;       	//区                      						//0 ~ 255	U8	EventYear;       	//年                      						//0 ~ 255	U8	EventMonth;      	//月                      						//1 ~ 12	U8	EventDay;        	//日                      						//1 ~ 31	U8	EventHour;       	//时                      						//0 ~ 23	U8	EventMinute;     	//分                      						//0 ~ 59	U8	EventSecond;     	//秒                      						//0 ~ 59	U8	EventCaption[40];	//说明文字，可配置20个汉字}SYSTEM_EVENT;#pragma pack()/***************************事件部分宏定义END*********************************************//****************************设备配置数据结构*****************************************************/#pragma pack(1)typedef struct{	U8	DeviceCondition;   	//	U8	Reserve1;          	//	U8	Reserve2;          	//	U8	Reserve3;          	//	U8	Reserve4;          	//	U8	Reserve5;          	//	U8	Reserve6;          	//	U8	Reserve7;          	//	U8	DeviceType;        	//	U8	PanelCardType;   	//	U16	DeviceAlarmValue;  	//	U8	Reserve9[2];       	//	U16	DeviceBuilding;    	//	U8	DeviceFloor;       	//	U8	DeviceZone;        	//	U8	Reserve10;         	//	U8	Reserve11;         	//	U8	Reserve12;         	//	U8	Reserve13;         	//	U8	Reserve14;         	//	U8	Reserve15;         	//	U8	DeviceCaption[40]; 	//}SYSTEM_DEVICE_CONFIG;#pragma pack
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
}QTime;/*****************************设备配置数据结构END********************************************************/#endif