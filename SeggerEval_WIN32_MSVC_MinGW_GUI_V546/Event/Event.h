#ifndef _EVENT_H
#define _EVENT_H#include "../usr/mygui_init.h"
/*************************�궨��****************************************************/#define EVENT_ALL_COUNT      2048 //����¼��洢����#define EVENT_ALARM_COUNT    4096 //��������#define EVENT_FAULT_COUNT     10000//����������#define EVENT_INVALID_CODE		 				 0xff#define EVENT_INVALID_CODE		 				 0xff#define EVENT_NORMAL                             1    //����#define EVENT_FIRE                               2    //��/**************************�궨��*****************************************************/
extern U16 EventFlashBasePointer; //���������¼���¼ָ��extern U16 EventFlashCurrentPointer;//�¼���ǰ��¼ָ��extern U16 EventRamCurrentPointer;//RAM��¼ָ��extern U16 EventRamPrinterPointer; //��ӡָ��extern U16 EventRamTaskPointer; //��ʾ����ָ��extern U16 EventFlashAlarmBasePointer; //�����������¼���¼ָ��extern U16 EventFlashAlarmCurrentPointer;//���¼���ǰָ��extern U16 EventAlarmCount; //��������extern U16 EventFaultCount;//��������extern U16 EventStartCount;//��������extern U8 EventSoundState;//����״̬extern U8 EventSwitchTimer;//�¼��л���ʱ��
extern SYSTEM_EVENT EventRamBuffer[EVENT_ALL_COUNT + 1];extern U16 EventFireRamCurrentPointer;extern U16 EventFaultRamCurrentPointer;
/************************��������*******************************************/extern void WriteEventToFlash(SYSTEM_EVENT *pEvent);extern void EventInit(void);extern void EventLedSoundDisplayProcess(U8 EventType);extern void EventShiledProcess(void);extern void EventOpenProcess(void);extern void EventTask(void);/************************��������*****************************************/

#endif

