/*
********************************************************************************
*                             ������̩�����������޹�˾
* ��    ַ �� �����з�̨���żҿ���·8��
* ��    �� �� 100072
* ��    ַ �� Http://www.guotaiyian.com
*
* �� �� �� : DeviceCaption.h
* ע    �� �� ���ļ�ΪGK7021    CRT ����
********************************************************************************
*/

#ifndef __EVENT_CONST_TABLE_H__
#define __EVENT_CONST_TABLE_H__#include "../usr/datastruct.h"#include "../Event/Communication.h"#include "../Event/EventDefine.h"
//�¼�������

EVENT_CONST const EventConstTable[] =
{
	//�¼�����                      �������ȼ�                        ƥ���¼�����                 ����    �¼�����
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//0
	{EVENT_TYPE_ALARM,              T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "����                      "},	//1
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "��                      "},	//2
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "�������ֱ���              "},	//3
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "��ȼ������ޱ���          "},	//4
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "��ȼ������ޱ���          "},	//5
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "��ȼ���峬���̱���        "},	//6
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "��������Ԥ��              "},	//7
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//8
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//9
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//10
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//11
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//12
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//13
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//14
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//15
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//16
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//17
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//18
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//19
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "����                      "},	//20
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "�Զ�����                  "},	//21
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "�ֶ�����                  "},	//22
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "�ֳ�����                  "},	//23
	{EVENT_TYPE_DELAY,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "�������ʼ��ʱ          "},	//24
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "��������                  "},	//25
	{EVENT_TYPE_FEEDBACK,           T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "����                      "},	//26
	{EVENT_TYPE_FEEDBACK,           T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "��������                  "},	//27
	{EVENT_TYPE_FEEDBACK_CANCLE,    T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_SPRAY_FEEDBACK,           3,  "��������                  "},	//28
	{EVENT_TYPE_STOP,               T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "ֹͣ                      "},	//29
	{EVENT_TYPE_STOP,               T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_FIELD_EMERGENT_START,     3,  "�ֳ���ͣ                  "},	//30
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//31
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//32
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//33
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//34
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//35
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//36
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//37
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//38
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//39
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//40
	{EVENT_TYPE_OTHER,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "Ӧ��                      "},	//41
	{EVENT_TYPE_OTHER,              T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "���                      "},	//42
	{EVENT_TYPE_OTHER,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "��־�ƾ߸ı䷽��          "},	//43
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "�����Ƚ�                  "},	//44
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "�����뽵                  "},	//45
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "����ȫ��                  "},	//46
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "����                      "},	//47
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "ͨ��                      "},	//48
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��Դʧ��          "},	//49
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��ԴǷѹ          "},	//50
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��Դ��ѹ          "},	//51
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��Դ����          "},	//52
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��Դȱ��          "},	//53
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����豸��Դ����          "},	//54
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "����ˮ�䣨�أ�ˮλ��      "},	//55
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             3,  "��������ͣ��              "},	//56
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//57
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//58
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//59
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//60
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//61
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//62
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//63
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//64
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//65
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//66
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//67
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//68
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//69
	{EVENT_TYPE_SUPERVISE,          T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "���                      "},	//70
	{EVENT_TYPE_SUPERVISE_CANCLE,   T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "��ܽ��                  "},	//71
	{EVENT_TYPE_DISABLE,            T_PRIORITY_OTHERS_EVENT,        EVENT_DISABLE,          	      3,  "����                      "},	//72
	{EVENT_TYPE_DISABLE_CANCLE,     T_PRIORITY_OTHERS_EVENT,        EVENT_DISABLE_REMOVE,           3,  "���ν��                  "},	//73
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//74
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//75
	{EVENT_TYPE_OTHER,              T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "��������                  "},	//76
	{EVENT_TYPE_OTHER,              T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "�����ָ�                  "},	//77
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//78
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//79
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "����                      "},	//80
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "ͨѶ����                  "},	//81
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "�������                  "},	//82
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "�������                  "},	//83
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "����Ƿѹ                  "},	//84
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "��·����                  "},	//85
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "��������                  "},	//86
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "��·����                  "},	//87
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "�ӵع���                  "},	//88
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "���շ����Ŵ�            "},	//89
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "���������Źر�            "},	//90
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "��ӡ������                "},	//91
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,        		  1,  "�������                  "},	//92
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "����Ƿѹ                  "},	//93
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "����Ƿѹ                  "},	//94
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "����                      "},	//95
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "��������                  "},	//96
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "�����������߹���          "},	//97
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "�����������߶�·          "},	//98
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����������߿�·          "},	//99
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "�����ش����߹���          "},	//10
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "�����ش����߶�·          "},	//101
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "�����ش����߿�·          "},	//102
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//103
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//104
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//105
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//106
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//107
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//108
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_FAULT,                    1,  "���ϻָ�                  "},	//109
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_COMMUNICATION_FAULT,      1,  "ͨѶ���ϻָ�              "},	//110
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_POWER_FAULT,              1,  "������ϻָ�              "},	//111
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_BATTERY_FAULT,            1,  "������ϻָ�              "},	//112
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_CHARGE_FAULT,             1,  "�����ϻָ�              "},	//113
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_LOOP_FAULT,               2,  "��·���ϻָ�              "},	//114
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_DEVICE_FAULT,             3,  "�������ϻָ�              "},	//115
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_LINE_FAULT,               2,  "��·���ϻָ�              "},	//116
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_GROUND_FAULT,             2,  "�ӵع��ϻָ�              "},	//117
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_NC_FILR_DOOR_OPEN,        3,  "���շ����Żָ��ر�״̬    "},	//118
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_NO_FILR_DOOR_CLOSE,       3,  "���������Żָ�����״̬    "},	//119
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_PRINTER_FAULT,            1,  "��ӡ�����ϻָ�            "},	//120
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SOUND_LIGHT_FAULT,		    1,  "������ϻָ�              "},	//121
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_BATTERY_LOWER,            1,  "����Ƿѹ�ָ�              "},	//122
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_POWER_LOWER,              1,  "����Ƿѹ�ָ�              "},	//123
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_OVERCURRENT,              2,  "�����ָ�                  "},	//124
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_OVERCURRENT_PROTECT,      3,  "���������ָ�              "},	//125
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_FAULT,        2,  "�����������߹��ϻָ�      "},	//126
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_SHORT,        2,  "�����������߶�·�ָ�      "},	//127
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_OPEN,         3,  "�����������߿�·�ָ�      "},	//128
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_FAULT,       3,  "�����ش����߹��ϻָ�      "},	//129
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_SHORT,       1,  "�����ش����߶�·�ָ�      "},	//130
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_OPEN,        1,  "�����ش����߿�·�ָ�      "},	//131
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//132
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//133
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//134
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//135
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//136
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//137
 	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "����                      "},	//138
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "�ػ�                      "},	//139
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "��λ                      "},	//140
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "�Լ�                      "},	//141
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,        	  	1,  "�Լ�ʧ��                  "},	//142
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,           	1,  "�ֶ�״̬                  "},	//143
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,           	1,  "�Զ�״̬                  "},	//144
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "ȷ��/����                 "},	//145
};

#endif

