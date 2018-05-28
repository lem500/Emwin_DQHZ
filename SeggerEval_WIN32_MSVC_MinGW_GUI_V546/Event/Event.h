#ifndef _EVENT_H
#define _EVENT_H#include "../usr/mygui_init.h"
/*************************宏定义****************************************************/#define EVENT_ALL_COUNT      2048 //最大事件存储数量#define EVENT_ALARM_COUNT    4096 //最大火警总数#define EVENT_FAULT_COUNT     10000//最大故障总数#define EVENT_INVALID_CODE		 				 0xff#define EVENT_INVALID_CODE		 				 0xff#define EVENT_NORMAL                             1    //正常#define EVENT_FIRE                               2    //火警/**************************宏定义*****************************************************/
extern U16 EventFlashBasePointer; //本次启动事件记录指针extern U16 EventFlashCurrentPointer;//事件当前记录指针extern U16 EventRamCurrentPointer;//RAM记录指针extern U16 EventRamPrinterPointer; //打印指针extern U16 EventRamTaskPointer; //显示声音指针extern U16 EventFlashAlarmBasePointer; //本次启动火警事件记录指针extern U16 EventFlashAlarmCurrentPointer;//火警事件当前指针extern U16 EventAlarmCount; //报警总数extern U16 EventFaultCount;//故障总数extern U16 EventStartCount;//启动总数extern U8 EventSoundState;//声音状态extern U8 EventSwitchTimer;//事件切换定时，
extern SYSTEM_EVENT EventRamBuffer[EVENT_ALL_COUNT + 1];extern U16 EventFireRamCurrentPointer;extern U16 EventFaultRamCurrentPointer;
/************************函数声明*******************************************/extern void WriteEventToFlash(SYSTEM_EVENT *pEvent);extern void EventInit(void);extern void EventLedSoundDisplayProcess(U8 EventType);extern void EventShiledProcess(void);extern void EventOpenProcess(void);extern void EventTask(void);/************************函数声明*****************************************/

#endif

