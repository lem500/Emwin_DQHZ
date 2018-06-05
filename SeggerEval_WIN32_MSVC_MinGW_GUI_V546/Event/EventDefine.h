/*
********************************************************************************
*                             ������̩�����������޹�˾
* ��    ַ �� �����з�̨���żҿ���·8��
* ��    �� �� 100072
* ��    ַ �� Http://www.guotaiyian.com
*
* �� �� �� : DeviceCaption.h
* ע    �� �� ���ļ�ΪGK7021  GK7023 GK7024 GK741 GK743 GM741  CRT ����
********************************************************************************
*/
#ifndef _EVENT_DEFINE_H_
#define _EVENT_DEFINE_H_
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

#define EVENT_INVALID_CODE		 				 0xff
#define EVENT_NORMAL                             1    //����
#define EVENT_FIRE                               2    //��
#define EVENT_ELECTRICAL_FIRE_ALARM              3    //�������ֱ���
#define EVENT_COMBUSTIBLE_GAS_LOV_ALARM          4    //��ȼ������ޱ���
#define EVENT_COMBUSTIBLE_GAS_HIGH_ALARM         5    //��ȼ������ޱ���
#define EVENT_COMBUSTIBLE_GAS_EXCESS_ALARM       6    //��ȼ���峬���̱���
#define EVENT_ELECTRICAL_FIRE_EARLYWARNING       7    //��������Ԥ��
//#define EVENT_                                 8    //Ԥ��
//#define EVENT_                                 9    //Ԥ��
//#define EVENT_                                 10   //Ԥ��
//#define EVENT_                                 11   //Ԥ��
//#define EVENT_                                 12   //Ԥ��
//#define EVENT_                                 13   //Ԥ��
//#define EVENT_                                 14   //Ԥ��
//#define EVENT_                                 15   //Ԥ��
//#define EVENT_                                 16   //Ԥ��
//#define EVENT_                                 17   //Ԥ��
//#define EVENT_                                 18   //Ԥ��
//#define EVENT_                                 19   //Ԥ��
#define EVENT_START                              20   //����
#define EVENT_AUTO_START                         21   //�Զ�����
#define EVENT_MANUL_START                        22   //�ֶ�����
#define EVENT_FIELD_EMERGENT_START               23   //�ֳ�����
#define EVENT_GAS_BEGAIN_DELAY                   24   //�������ʼ��ʱ
#define EVENT_GAS_SPRAY                          25   //��������
#define EVENT_FEEDBACK                           26   //����
#define EVENT_SPRAY_FEEDBACK                     27   //��������
#define EVENT_FEEDBACK_CANCLE                    28   //��������
#define EVENT_STOP                               29   //ֹͣ
#define EVENT_FIELD_EMERGENT_STOP                30   //�ֳ���ͣ
//#define EVENT_                                 31   //Ԥ��
//#define EVENT_                                 32   //Ԥ��
//#define EVENT_                                 33   //Ԥ��
//#define EVENT_                                 34   //Ԥ��
//#define EVENT_                                 35   //Ԥ��
//#define EVENT_                                 36   //Ԥ��
//#define EVENT_                                 37   //Ԥ��
//#define EVENT_                                 38   //Ԥ��
//#define EVENT_                                 39   //Ԥ��
#define EVENT_EMERGENCY                          40   //Ӧ��
#define EVENT_MONTHLY_TEST                       41   //�¼�
#define EVENT_ANNUAL                             42   //���
#define EVENT_MASK_LAMPS_CHANGE_DIRECTION        43   //��־�ƾ߸ı䷽��
#define EVENT_LIFT_DOWN                          44   //�����Ƚ�
#define EVENT_SHUTTER_HALF_DOWN                  45   //�����뽵
#define EVENT_SHUTTER_ALL_DOWN                   46   //����ȫ��
#define EVENT_TALK                               47   //����
#define EVENT_CALL                               48   //ͨ��

#define EVENT_FIRE_EQUIPMENT_NO_POWER            49   //�����豸��Դʧ��
#define EVENT_FIRE_EQUIPMENT_UNDER_POWER         50   //�����豸��ԴǷѹ
#define EVENT_FIRE_EQUIPMENT_OVER_POWER          51   //�����豸��Դ��ѹ
#define EVENT_FIRE_EQUIPMENT_POWER               52   //�����豸��Դ����
#define EVENT_FIRE_EQUIPMENT_OVERDRIVE_POWER     53   //�����豸��Դȱ��
#define EVENT_FIRE_EQUIPMENT_MISPHASE_POWER      54   //�����豸��Դ����
#define EVENT_FIRE_WATER_TANK_LOW                55   //����ˮ�䣨�أ�ˮλ��
#define EVENT_FIRE_LIFT_NON_USE                  56   //��������ͣ��
//#define EVENT_                                 57   //Ԥ��
//#define EVENT_                                 58   //Ԥ��
//#define EVENT_                                 59   //Ԥ��
//#define EVENT_                                 60   //Ԥ��
//#define EVENT_                                 61   //Ԥ��
//#define EVENT_                                 62   //Ԥ��
//#define EVENT_                                 63   //Ԥ��
//#define EVENT_                                 64   //Ԥ��
//#define EVENT_                                 65   //Ԥ��
//#define EVENT_                                 66   //Ԥ��
//#define EVENT_                                 67   //Ԥ��
//#define EVENT_                                 68   //Ԥ��
//#define EVENT_                                 69   //Ԥ��
#define EVENT_SUPERVISE                          70   //���
#define EVENT_SUPERVISE_REMOVE                   71   //��ܽ��
#define EVENT_DISABLE                            72   //����
#define EVENT_DISABLE_REMOVE                     73   //���ν��
//#define EVENT_                                 74   //Ԥ��
//#define EVENT_                                 75   //Ԥ��
#define EVENT_KEY_DOWN                           76   //��������
#define EVENT_KEY_UP                             77   //�����ָ�
//#define EVENT_                                 78   //Ԥ��
//#define EVENT_                                 79   //Ԥ��
#define EVENT_FAULT                            80   //����
#define EVENT_COMMUNICATION_FAULT              81   //ͨѶ����
#define EVENT_POWER_FAULT                      82   //�������
#define EVENT_BATTERY_FAULT                    83   //�������
#define EVENT_CHARGE_FAULT                     84   //������
#define EVENT_LOOP_FAULT                       85   //��·����
#define EVENT_DEVICE_FAULT                     86   //��������
#define EVENT_LINE_FAULT                       87   //��·����
#define EVENT_GROUND_FAULT                     88   //�ӵع���
#define EVENT_NC_FILR_DOOR_OPEN                89   //���շ����Ŵ�
#define EVENT_NO_FILR_DOOR_CLOSE               90   //���������Źر�
#define EVENT_PRINTER_FAULT                    91   //��ӡ������
#define EVENT_SOUND_LIGHT_FAULT                92   //�������
#define EVENT_BATTERY_LOWER                    93   //����Ƿѹ
#define EVENT_POWER_LOWER                      94   //����Ƿѹ
#define EVENT_OVERCURRENT                      95   //����
#define EVENT_OVERCURRENT_PROTECT              96   //��������
#define EVENT_SPRAY_START_FAULT                97   //�����������߹���
#define EVENT_SPRAY_START_SHORT                98   //�����������߶�·
#define EVENT_SPRAY_START_OPEN          	   99   //�����������߿�·
#define EVENT_SPRAY_ANSWER_FAULT               100  //�����ش����߹���
#define EVENT_SPRAY_ANSWER_SHORT               101  //�����ش����߶�·
#define EVENT_SPRAY_ANSWER_OPEN          	   102  //�����ش����߿�·
//#define EVENT_                                 103  //Ԥ��
//#define EVENT_                                 104  //Ԥ��
//#define EVENT_                                 105  //Ԥ��
//#define EVENT_                                 106  //Ԥ��
//#define EVENT_                                 107  //Ԥ��
//#define EVENT_                                 108  //Ԥ��
#define EVENT_FAULT_RECOVERY                   109  //���ϻָ�
#define EVENT_COMMUNICATION_FAULT_RECOVERY     110  //ͨѶ���ϻָ�
#define EVENT_POWER_FAULT_RECOVERY             111  //������ϻָ�
#define EVENT_BATTERY_FAULT_RECOVERY           112  //������ϻָ�
#define EVENT_CHARGE_FAULT_RECOVERY            113  //�����ϻָ�
#define EVENT_LOOP_FAULT_RECOVERY              114  //��·���ϻָ�
#define EVENT_DEVICE_FAULT_RECOVERY            115  //�������ϻָ�
#define EVENT_LINE_FAULT_RECOVERY              116  //��·���ϻָ�
#define EVENT_GROUND_FAULT_RECOVERY            117  //�ӵع��ϻָ�
#define EVENT_NC_FILR_DOOR_RE_CLOSE            118  //���շ����Żָ��ر�״̬
#define EVENT_NO_FILR_DOOR_RE_OPEN             119  //���������Żָ�����״̬
#define EVENT_PRINTER_FAULT_RECOVERY           120  //��ӡ�����ϻָ�
#define EVENT_SOUND_LIGHT_FAULT_RECOVERY       121  //������ϻָ�
#define EVENT_BATTERY_LOWER_RECOVERY           122  //����Ƿѹ�ָ�
#define EVENT_POWER_LOWER_RECOVERY             123  //����Ƿѹ�ָ�
#define EVENT_OVERCURRENT_RECOVERY             124  //�����ָ�
#define EVENT_OVERCURRENT_PROTECT_RECOVERY     125  //���������ָ�
#define EVENT_SPRAY_START_FAULT_RECOVERY       126  //�����������߹��ϻָ�
#define EVENT_SPRAY_START_SHORT_RECOVERY       127  //�����������߶�·�ָ�
#define EVENT_SPRAY_START_OPEN_RECOVERY        128  //�����������߿�·�ָ�
#define EVENT_SPRAY_ANSWER_FAULT_RECOVERY      129  //�����ش����߹��ϻָ�
#define EVENT_SPRAY_ANSWER_SHORT_RECOVERY      130  //�����ش����߶�·�ָ�
#define EVENT_SPRAY_ANSWER_OPEN_RECOVERY       131  //�����ش����߿�·�ָ�
//#define EVENT_                                 132  //Ԥ��
//#define EVENT_                                 133  //Ԥ��
//#define EVENT_                                 134  //Ԥ��
//#define EVENT_                                 135  //Ԥ��
//#define EVENT_                                 136  //Ԥ��
//#define EVENT_                                 137  //Ԥ��
#define EVENT_POWER_ON                         138  //����
#define EVENT_POWER_OFF                        139  //�ػ�
#define EVENT_RESET                            140  //��λ
#define EVENT_SELF_TEST                        141  //�Լ�
#define EVENT_SELF_TEST_FAILURE                142  //�Լ�ʧ��
#define EVENT_MANULE_CONDITION                 143  //�ֶ�״̬
#define EVENT_AUTO_CONDITION                   144  //�Զ�״̬
#define EVENT_SILENCE                          145  //ȷ��/����

#endif

