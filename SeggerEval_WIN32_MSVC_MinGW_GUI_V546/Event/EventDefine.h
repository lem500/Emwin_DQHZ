/*
********************************************************************************
*                             北京国泰怡安电子有限公司
* 地    址 ： 北京市丰台区杜家坎南路8号
* 邮    编 ： 100072
* 网    址 ： Http://www.guotaiyian.com
*
* 文 件 名 : DeviceCaption.h
* 注    意 ： 此文件为GK7021  GK7023 GK7024 GK741 GK743 GM741  CRT 共用
********************************************************************************
*/
#ifndef _EVENT_DEFINE_H_
#define _EVENT_DEFINE_H_
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

#define EVENT_INVALID_CODE		 				 0xff
#define EVENT_NORMAL                             1    //正常
#define EVENT_FIRE                               2    //火警
#define EVENT_ELECTRICAL_FIRE_ALARM              3    //电气火灾报警
#define EVENT_COMBUSTIBLE_GAS_LOV_ALARM          4    //可燃气体低限报警
#define EVENT_COMBUSTIBLE_GAS_HIGH_ALARM         5    //可燃气体高限报警
#define EVENT_COMBUSTIBLE_GAS_EXCESS_ALARM       6    //可燃气体超量程报警
#define EVENT_ELECTRICAL_FIRE_EARLYWARNING       7    //电气火灾预警
//#define EVENT_                                 8    //预留
//#define EVENT_                                 9    //预留
//#define EVENT_                                 10   //预留
//#define EVENT_                                 11   //预留
//#define EVENT_                                 12   //预留
//#define EVENT_                                 13   //预留
//#define EVENT_                                 14   //预留
//#define EVENT_                                 15   //预留
//#define EVENT_                                 16   //预留
//#define EVENT_                                 17   //预留
//#define EVENT_                                 18   //预留
//#define EVENT_                                 19   //预留
#define EVENT_START                              20   //启动
#define EVENT_AUTO_START                         21   //自动启动
#define EVENT_MANUL_START                        22   //手动启动
#define EVENT_FIELD_EMERGENT_START               23   //现场急启
#define EVENT_GAS_BEGAIN_DELAY                   24   //气体灭火开始延时
#define EVENT_GAS_SPRAY                          25   //气体喷洒
#define EVENT_FEEDBACK                           26   //反馈
#define EVENT_SPRAY_FEEDBACK                     27   //喷洒反馈
#define EVENT_FEEDBACK_CANCLE                    28   //反馈撤销
#define EVENT_STOP                               29   //停止
#define EVENT_FIELD_EMERGENT_STOP                30   //现场急停
//#define EVENT_                                 31   //预留
//#define EVENT_                                 32   //预留
//#define EVENT_                                 33   //预留
//#define EVENT_                                 34   //预留
//#define EVENT_                                 35   //预留
//#define EVENT_                                 36   //预留
//#define EVENT_                                 37   //预留
//#define EVENT_                                 38   //预留
//#define EVENT_                                 39   //预留
#define EVENT_EMERGENCY                          40   //应急
#define EVENT_MONTHLY_TEST                       41   //月检
#define EVENT_ANNUAL                             42   //年检
#define EVENT_MASK_LAMPS_CHANGE_DIRECTION        43   //标志灯具改变方向
#define EVENT_LIFT_DOWN                          44   //电梯迫降
#define EVENT_SHUTTER_HALF_DOWN                  45   //卷帘半降
#define EVENT_SHUTTER_ALL_DOWN                   46   //卷帘全降
#define EVENT_TALK                               47   //呼叫
#define EVENT_CALL                               48   //通话

#define EVENT_FIRE_EQUIPMENT_NO_POWER            49   //消防设备电源失电
#define EVENT_FIRE_EQUIPMENT_UNDER_POWER         50   //消防设备电源欠压
#define EVENT_FIRE_EQUIPMENT_OVER_POWER          51   //消防设备电源过压
#define EVENT_FIRE_EQUIPMENT_POWER               52   //消防设备电源过载
#define EVENT_FIRE_EQUIPMENT_OVERDRIVE_POWER     53   //消防设备电源缺相
#define EVENT_FIRE_EQUIPMENT_MISPHASE_POWER      54   //消防设备电源错相
#define EVENT_FIRE_WATER_TANK_LOW                55   //消防水箱（池）水位低
#define EVENT_FIRE_LIFT_NON_USE                  56   //消防电梯停用
//#define EVENT_                                 57   //预留
//#define EVENT_                                 58   //预留
//#define EVENT_                                 59   //预留
//#define EVENT_                                 60   //预留
//#define EVENT_                                 61   //预留
//#define EVENT_                                 62   //预留
//#define EVENT_                                 63   //预留
//#define EVENT_                                 64   //预留
//#define EVENT_                                 65   //预留
//#define EVENT_                                 66   //预留
//#define EVENT_                                 67   //预留
//#define EVENT_                                 68   //预留
//#define EVENT_                                 69   //预留
#define EVENT_SUPERVISE                          70   //监管
#define EVENT_SUPERVISE_REMOVE                   71   //监管解除
#define EVENT_DISABLE                            72   //屏蔽
#define EVENT_DISABLE_REMOVE                     73   //屏蔽解除
//#define EVENT_                                 74   //预留
//#define EVENT_                                 75   //预留
#define EVENT_KEY_DOWN                           76   //按键按下
#define EVENT_KEY_UP                             77   //按键恢复
//#define EVENT_                                 78   //预留
//#define EVENT_                                 79   //预留
#define EVENT_FAULT                            80   //故障
#define EVENT_COMMUNICATION_FAULT              81   //通讯故障
#define EVENT_POWER_FAULT                      82   //主电故障
#define EVENT_BATTERY_FAULT                    83   //备电故障
#define EVENT_CHARGE_FAULT                     84   //充电故障
#define EVENT_LOOP_FAULT                       85   //回路故障
#define EVENT_DEVICE_FAULT                     86   //部件故障
#define EVENT_LINE_FAULT                       87   //线路故障
#define EVENT_GROUND_FAULT                     88   //接地故障
#define EVENT_NC_FILR_DOOR_OPEN                89   //常闭防火门打开
#define EVENT_NO_FILR_DOOR_CLOSE               90   //常开防火门关闭
#define EVENT_PRINTER_FAULT                    91   //打印机故障
#define EVENT_SOUND_LIGHT_FAULT                92   //声光故障
#define EVENT_BATTERY_LOWER                    93   //备电欠压
#define EVENT_POWER_LOWER                      94   //主电欠压
#define EVENT_OVERCURRENT                      95   //过流
#define EVENT_OVERCURRENT_PROTECT              96   //过流保护
#define EVENT_SPRAY_START_FAULT                97   //喷洒启动连线故障
#define EVENT_SPRAY_START_SHORT                98   //喷洒启动连线短路
#define EVENT_SPRAY_START_OPEN          	   99   //喷洒启动连线开路
#define EVENT_SPRAY_ANSWER_FAULT               100  //喷洒回答连线故障
#define EVENT_SPRAY_ANSWER_SHORT               101  //喷洒回答连线短路
#define EVENT_SPRAY_ANSWER_OPEN          	   102  //喷洒回答连线开路
//#define EVENT_                                 103  //预留
//#define EVENT_                                 104  //预留
//#define EVENT_                                 105  //预留
//#define EVENT_                                 106  //预留
//#define EVENT_                                 107  //预留
//#define EVENT_                                 108  //预留
#define EVENT_FAULT_RECOVERY                   109  //故障恢复
#define EVENT_COMMUNICATION_FAULT_RECOVERY     110  //通讯故障恢复
#define EVENT_POWER_FAULT_RECOVERY             111  //主电故障恢复
#define EVENT_BATTERY_FAULT_RECOVERY           112  //备电故障恢复
#define EVENT_CHARGE_FAULT_RECOVERY            113  //充电故障恢复
#define EVENT_LOOP_FAULT_RECOVERY              114  //回路故障恢复
#define EVENT_DEVICE_FAULT_RECOVERY            115  //部件故障恢复
#define EVENT_LINE_FAULT_RECOVERY              116  //线路故障恢复
#define EVENT_GROUND_FAULT_RECOVERY            117  //接地故障恢复
#define EVENT_NC_FILR_DOOR_RE_CLOSE            118  //常闭防火门恢复关闭状态
#define EVENT_NO_FILR_DOOR_RE_OPEN             119  //常开防火门恢复开门状态
#define EVENT_PRINTER_FAULT_RECOVERY           120  //打印机故障恢复
#define EVENT_SOUND_LIGHT_FAULT_RECOVERY       121  //声光故障恢复
#define EVENT_BATTERY_LOWER_RECOVERY           122  //备电欠压恢复
#define EVENT_POWER_LOWER_RECOVERY             123  //主电欠压恢复
#define EVENT_OVERCURRENT_RECOVERY             124  //过流恢复
#define EVENT_OVERCURRENT_PROTECT_RECOVERY     125  //过流保护恢复
#define EVENT_SPRAY_START_FAULT_RECOVERY       126  //喷洒启动连线故障恢复
#define EVENT_SPRAY_START_SHORT_RECOVERY       127  //喷洒启动连线短路恢复
#define EVENT_SPRAY_START_OPEN_RECOVERY        128  //喷洒启动连线开路恢复
#define EVENT_SPRAY_ANSWER_FAULT_RECOVERY      129  //喷洒回答连线故障恢复
#define EVENT_SPRAY_ANSWER_SHORT_RECOVERY      130  //喷洒回答连线短路恢复
#define EVENT_SPRAY_ANSWER_OPEN_RECOVERY       131  //喷洒回答连线开路恢复
//#define EVENT_                                 132  //预留
//#define EVENT_                                 133  //预留
//#define EVENT_                                 134  //预留
//#define EVENT_                                 135  //预留
//#define EVENT_                                 136  //预留
//#define EVENT_                                 137  //预留
#define EVENT_POWER_ON                         138  //开机
#define EVENT_POWER_OFF                        139  //关机
#define EVENT_RESET                            140  //复位
#define EVENT_SELF_TEST                        141  //自检
#define EVENT_SELF_TEST_FAILURE                142  //自检失败
#define EVENT_MANULE_CONDITION                 143  //手动状态
#define EVENT_AUTO_CONDITION                   144  //自动状态
#define EVENT_SILENCE                          145  //确认/消音

#endif

