/*
********************************************************************************
*                             北京国泰怡安电子有限公司
* 地    址 ： 北京市丰台区杜家坎南路8号
* 邮    编 ： 100072
* 网    址 ： Http://www.guotaiyian.com
*
* 文 件 名 : DeviceCaption.h
* 注    意 ： 此文件为GK7021    CRT 共用
********************************************************************************
*/

#ifndef __EVENT_CONST_TABLE_H__
#define __EVENT_CONST_TABLE_H__#include "../usr/datastruct.h"#include "../Event/Communication.h"#include "../Event/EventDefine.h"
//事件常量表

EVENT_CONST const EventConstTable[] =
{
	//事件类型                      传输优先级                        匹配事件代码                 参数    事件描述
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//0
	{EVENT_TYPE_ALARM,              T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "正常                      "},	//1
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "火警                      "},	//2
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "电气火灾报警              "},	//3
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "可燃气体低限报警          "},	//4
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "可燃气体高限报警          "},	//5
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "可燃气体超量程报警        "},	//6
	{EVENT_TYPE_ALARM,              T_PRIORITY_ALARM_EVENT,         EVENT_INVALID_CODE,             3,  "电气火灾预警              "},	//7
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
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "启动                      "},	//20
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "自动启动                  "},	//21
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "手动启动                  "},	//22
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "现场急启                  "},	//23
	{EVENT_TYPE_DELAY,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "气体灭火开始延时          "},	//24
	{EVENT_TYPE_START,              T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "气体喷洒                  "},	//25
	{EVENT_TYPE_FEEDBACK,           T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "反馈                      "},	//26
	{EVENT_TYPE_FEEDBACK,           T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "喷洒反馈                  "},	//27
	{EVENT_TYPE_FEEDBACK_CANCLE,    T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_SPRAY_FEEDBACK,           3,  "反馈撤销                  "},	//28
	{EVENT_TYPE_STOP,               T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "停止                      "},	//29
	{EVENT_TYPE_STOP,               T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_FIELD_EMERGENT_START,     3,  "现场急停                  "},	//30
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
	{EVENT_TYPE_OTHER,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "应急                      "},	//41
	{EVENT_TYPE_OTHER,              T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "年检                      "},	//42
	{EVENT_TYPE_OTHER,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "标志灯具改变方向          "},	//43
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "电梯迫降                  "},	//44
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "卷帘半降                  "},	//45
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "卷帘全降                  "},	//46
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "呼叫                      "},	//47
	{EVENT_TYPE_START,              T_PRIORITY_ACT_CMD,             EVENT_INVALID_CODE,             3,  "通话                      "},	//48
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源失电          "},	//49
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源欠压          "},	//50
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源过压          "},	//51
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源过载          "},	//52
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源缺相          "},	//53
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防设备电源错相          "},	//54
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "消防水箱（池）水位低      "},	//55
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             3,  "消防电梯停用              "},	//56
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
	{EVENT_TYPE_SUPERVISE,          T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "监管                      "},	//70
	{EVENT_TYPE_SUPERVISE_CANCLE,   T_PRIORITY_ACT_FEEDBACK_EVENT,  EVENT_INVALID_CODE,             3,  "监管解除                  "},	//71
	{EVENT_TYPE_DISABLE,            T_PRIORITY_OTHERS_EVENT,        EVENT_DISABLE,          	      3,  "屏蔽                      "},	//72
	{EVENT_TYPE_DISABLE_CANCLE,     T_PRIORITY_OTHERS_EVENT,        EVENT_DISABLE_REMOVE,           3,  "屏蔽解除                  "},	//73
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//74
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//75
	{EVENT_TYPE_OTHER,              T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "按键按下                  "},	//76
	{EVENT_TYPE_OTHER,              T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "按键恢复                  "},	//77
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//78
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//79
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "故障                      "},	//80
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "通讯故障                  "},	//81
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "主电故障                  "},	//82
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "备电故障                  "},	//83
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "备电欠压                  "},	//84
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "回路故障                  "},	//85
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "部件故障                  "},	//86
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "线路故障                  "},	//87
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "接地故障                  "},	//88
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "常闭防火门打开            "},	//89
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "常开防火门关闭            "},	//90
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "打印机故障                "},	//91
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,        		  1,  "声光故障                  "},	//92
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "备电欠压                  "},	//93
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "主电欠压                  "},	//94
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "过流                      "},	//95
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "过流保护                  "},	//96
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "喷洒启动连线故障          "},	//97
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             2,  "喷洒启动连线短路          "},	//98
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "喷洒启动连线开路          "},	//99
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             3,  "喷洒回答连线故障          "},	//10
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "喷洒回答连线短路          "},	//101
	{EVENT_TYPE_FAULT,              T_PRIORITY_FAULT_EVENT,         EVENT_INVALID_CODE,             1,  "喷洒回答连线开路          "},	//102
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//103
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//104
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//105
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//106
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//107
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//108
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_FAULT,                    1,  "故障恢复                  "},	//109
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_COMMUNICATION_FAULT,      1,  "通讯故障恢复              "},	//110
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_POWER_FAULT,              1,  "主电故障恢复              "},	//111
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_BATTERY_FAULT,            1,  "备电故障恢复              "},	//112
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_CHARGE_FAULT,             1,  "充电故障恢复              "},	//113
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_LOOP_FAULT,               2,  "回路故障恢复              "},	//114
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_DEVICE_FAULT,             3,  "部件故障恢复              "},	//115
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_LINE_FAULT,               2,  "线路故障恢复              "},	//116
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_GROUND_FAULT,             2,  "接地故障恢复              "},	//117
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_NC_FILR_DOOR_OPEN,        3,  "常闭防火门恢复关闭状态    "},	//118
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_NO_FILR_DOOR_CLOSE,       3,  "常开防火门恢复开门状态    "},	//119
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_PRINTER_FAULT,            1,  "打印机故障恢复            "},	//120
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SOUND_LIGHT_FAULT,		    1,  "声光故障恢复              "},	//121
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_BATTERY_LOWER,            1,  "备电欠压恢复              "},	//122
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_POWER_LOWER,              1,  "主电欠压恢复              "},	//123
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_OVERCURRENT,              2,  "过流恢复                  "},	//124
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_OVERCURRENT_PROTECT,      3,  "过流保护恢复              "},	//125
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_FAULT,        2,  "喷洒启动连线故障恢复      "},	//126
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_SHORT,        2,  "喷洒启动连线短路恢复      "},	//127
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_START_OPEN,         3,  "喷洒启动连线开路恢复      "},	//128
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_FAULT,       3,  "喷洒回答连线故障恢复      "},	//129
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_SHORT,       1,  "喷洒回答连线短路恢复      "},	//130
	{EVENT_TYPE_FAULT_RESUME,       T_PRIORITY_FAULT_EVENT,         EVENT_SPRAY_ANSWER_OPEN,        1,  "喷洒回答连线开路恢复      "},	//131
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//132
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//133
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//134
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//135
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//136
	{EVENT_TYPE_ANY,                T_PRIORITY_LOWEST,              EVENT_INVALID_CODE,             1,  "                          "},	//137
 	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "开机                      "},	//138
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "关机                      "},	//139
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,             1,  "复位                      "},	//140
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "自检                      "},	//141
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,        	  	1,  "自检失败                  "},	//142
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,           	1,  "手动状态                  "},	//143
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,           	1,  "自动状态                  "},	//144
	{EVENT_TYPE_SYSTEM,             T_PRIORITY_OTHERS_EVENT,        EVENT_INVALID_CODE,            	1,  "确认/消音                 "},	//145
};

#endif

