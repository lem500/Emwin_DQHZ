#ifndef MYGUI_INIT_H_INCLUDED
#define MYGUI_INIT_H_INCLUDED
#include "GUI.h"#include "dialog.h"#include "WM.h"#include "datastruct.h"#include "stdio.h"#define CODEBLACK_FLAG 1//#include "../usr/stay24.h"extern unsigned char timee[30];extern unsigned char yonghujibie[];extern GUI_CONST_STORAGE GUI_FONT GUI_Fontstay24;//W0�������ı�
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01) //��ʾʱ��
#define ID_TEXT_1 (GUI_ID_USER + 0x02) //��ʾ���ڼ����
#define ID_TEXT_2 (GUI_ID_USER + 0x03) //��ʾ�������ּ�ؿ�����
#define ID_TEXT_3 (GUI_ID_USER + 0x04) //������̩����

#define ID_IMAGE_0 (GUI_ID_USER + 0x05)
#define ID_IMAGE_0_IMAGE_0 0x00
//W1���˵��ı�
#define ID_WINDOW_1 (GUI_ID_USER + 0x06)//���˵�����
#define ID_TEXT_4 (GUI_ID_USER + 0x07)//���˵��ı���
#define ID_TEXT_5 (GUI_ID_USER + 0x08)//ϵͳ�����ı���
#define ID_TEXT_6 (GUI_ID_USER + 0x09)//��Ϣ��ѯ�ı���
#define ID_TEXT_7 (GUI_ID_USER + 0x0A)//�����ı���
#define ID_TEXT_8 (GUI_ID_USER + 0x0B)//�����ı���
#define ID_TEXT_9 (GUI_ID_USER + 0x0C)//�Լ��ı���
#define ID_TEXT_10 (GUI_ID_USER + 0x0D)//ʱ����ʾ�ı���
//W2ϵͳ�����ı�
#define ID_WINDOW_2 (GUI_ID_USER + 0x0E)//ϵͳ���ý���
#define ID_TEXT_11 (GUI_ID_USER + 0x0F)
#define ID_TEXT_12 (GUI_ID_USER + 0x10)
#define ID_TEXT_13 (GUI_ID_USER + 0x11)
#define ID_TEXT_14 (GUI_ID_USER + 0x12)
#define ID_TEXT_15 (GUI_ID_USER + 0x13)
#define ID_TEXT_16 (GUI_ID_USER + 0x14)
#define ID_TEXT_17 (GUI_ID_USER + 0x15)#define ID_TEXT_18 (GUI_ID_USER + 0x16)
#define ID_TEXT_19 (GUI_ID_USER + 0x17)
//W3��Ϣ��ѯ�����ı�#define ID_FRAMEWIN_3 (GUI_ID_USER + 0x18)
#define ID_TEXT_20 (GUI_ID_USER + 0x19)
#define ID_TEXT_21 (GUI_ID_USER + 0x1A)
#define ID_TEXT_22 (GUI_ID_USER + 0x1B)
#define ID_TEXT_23 (GUI_ID_USER + 0x1C)
#define ID_TEXT_24 (GUI_ID_USER + 0x1D)
#define ID_TEXT_25 (GUI_ID_USER + 0x1E)
#define ID_TEXT_26 (GUI_ID_USER + 0x1F)
#define GUI_USR_KEY_ALARM             35
#define GUI_USR_KEY_FAULT             36
#define GUI_USR_KEY_SHEILD            37
#define GUI_USR_KEY_OUT               38
#define GUI_USR_KEY_SLIENCE           39
#define GUI_USR_KEY_RESET             43#define GUI_USR_KEY_DASH              45//��������
#define LCD_INVALID_WIN			0#define WIN_TYPE_TEXT			1	//#define WIN_TYPE_MENU			2	//#define WIN_TYPE_EDIT			3	//#define WIN_TYPE_EVENT			4	//#define WIN_TYPE_CONSOLE		5	//

//��������
#define WINDOW0_INDEX          1//��ؽ���
#define WINDOW_MENU_INDEX      2 //���˵�����#define WINDOW_SYSSET_INDEX    3 //ϵͳ���ý���#define WINDOW_W4_EVENTQUERY   4 //��Ϣ��ѯ����#define WINDOW_W5_TIMESET      5 //ʱ�����ý���#define WINDOW_W6_PRINTSET     6 //��ӡ���ý���#define WINDOWS_W7_PASSWARDSET 7 //��������#define WINDOWS_W8_EDITDEVICE  8 //��������#define WINDOW_W9_COMMUNCTIONSEET 9//ͨѶ����#define WINDOW_W10_RESET       10 //ϵͳ��ʼ��#define WINDOW_W11_UPDATESYS   11 //ϵͳ����#define WINDOW_W12_LOOPLOGIN   12 //�Զ���¼����#define WINDOW_W13_CRTSET      13 //CRT���ý���#define WINDOW_W14_NETSET      14 //��������#define WINDOW_W15_ALARM       15 //������Ϣ#define WINDOW_W16_EVENT       16 //�¼���Ϣ#define WINDOW_W17_SHEILD      17 //������Ϣ#define WINDOW_W18_OUT         18 //�����Ϣ#define WINDOW_W19_INFO        19 //ϵͳ��Ϣ#define WINDOW_W20_SheildSet   20 //��������#define WINDOW_W21_OpenSet     21 //���Ž���#define WINDOW_W22_Zijian      22 //�Լ����#define WINDOW_W23_DeviceInfo  23 //�豸��Ϣ#define WINDOW_W24_ALARWIM     24 //��������#define WINDOW_W25_FAULTWIM    25 //���Ͻ���#define WINDOW_W26_SHEILDWIM   26 //���ν���//��ɫ#define HFM_COLOR_BK    GUI_MAKE_COLOR(0x00E3D2CA) //������ɫ//����ɫ#define HFM_COLOR_BK1   GUI_MAKE_COLOR(0x00C2A695) //����ɫ#define  HFM_COLOR_BY    GUI_MAKE_COLOR(0x0012B054) //�м�ɫ#define HFM_HEAD_BK      GUI_MAKE_COLOR(0x00995C3D) //���ⱳ��ɫ//Ʒ��ɫ//ShowMessage#define WIN_SUCESS_WRITE   0 //����ɹ�#define WIN_ERR_DATA       1 //���ݴ���
extern unsigned char WinIndex;//��������
extern unsigned char WinLastIndex;extern unsigned char WinKeyValue;extern unsigned char key_flag;extern SYSTEM_CONFIG systemset;extern WM_HWIN W_MessageBox;
extern WM_HWIN window0;//��ؽ���
extern WM_HWIN menu_window;//���˵�����extern WM_HWIN W5_TimeSet_window;//ʱ�����ý���extern WM_HWIN _hwTime[30];
extern void mygui_init(void);
extern WM_HWIN FHM_KeyBoard_Main(void);
extern WM_HWIN Create_menu1_Window(void);
extern WM_HWIN Create_W4_EventQuery_Framewin(void);extern WM_HWIN Create_W5_TimeSet_Window(void);extern WM_HWIN Create_W6_PrintSet_Window(void);extern WM_HWIN Create_W7_PasswardSet_Window(void);extern WM_HWIN Create_W8_Editdevice_Window(void);extern WM_HWIN Create_W9_Comm_Window(void);extern WM_HWIN Create_W10_Reset_Window(void);extern WM_HWIN Create_W11_UPDATE_Window(void);extern WM_HWIN Create_W12_LoopLoginWindow(void);extern WM_HWIN Create_W13_CRTSET_Window(void);extern WM_HWIN Create_W14_NetSet_Window(void);extern WM_HWIN Create_W15_AlarmQuery_Window(void);extern WM_HWIN Create_W16_EventQuery_Window(void);extern WM_HWIN Create_W17_SheildQuery_Window(void);extern WM_HWIN Create_W18_OUTQuery_Window(void);extern WM_HWIN Create_W19_InfoQuery_Window(void);extern WM_HWIN Create_W20_SheildSet_Window(void);extern WM_HWIN Create_W23_DeviceInfo_Window(void);extern WM_HWIN Create_W24_AlarmWim_Window(void);extern WM_HWIN Create_W25_FaultWim_Window(void);extern WM_HWIN Create_W26_SheildWim_Window(void);extern WM_HWIN Create_MessageBox_Framewin(void);extern void W2_menuWindowDisplay(void);extern void W2_menuWindowProcess(void);extern void W3_SystemWindowDisplay(void);extern void W3_SystemWindowProcess(void);extern void W4_EventWindowDisplay(void);extern void W4_EventWindowProcess(void);extern void W5_TimeSetWindowDisplay(void);extern void W5_TimeSetWindowProcess(void);extern void W6_PrintSetWindowDisplay(void);extern void W6_PrintSetWindowProcess(void);extern void W7_PassWordSetWindowDisplay(void);extern void W7_PassWordSetWindowProcess(void);extern void W8_EditdeviceWindowDisplay(void);extern void W8_EditdeviceWindowProcess(void);extern void W9_CommunicationWindowDisplay(void);extern void W9_CommunicationWindowProcess(void);extern void W10_ResetWindowDisplay(void);extern void W10_ResetWindowProcess(void);extern void W11_UpdateWindowDisplay(void);extern void W11_UpdateWindowProcess(void);extern void W12_LooploginWindowDisplay(void);extern void W12_LooploginWindowProcess(void);extern void W13_CrtSetWindowDisplay(void);extern void W13_CrtSetWindowProcess(void);extern void W14_NetSetWindowDisplay(void);extern void W14_NetSetWindowProcess(void);extern void W15_AlarmQueryWindowDisplay(void);extern void W15_AlarmQueryWindowProcess(void);extern void W16_EventQueryWindowDisplay(void);extern void W16_EventQueryWindowProcess(void);extern void W17_SheildQueryWindowDisplay(void);extern void W17_SheildQueryWindowProcess(void);extern void W18_OutQueryWindowDisplay(void);extern void W18_OutQueryWindowProcess(void);extern void W19_InfoQueryWindowDisplay(void);extern void W19_InfoQueryWindowProcess(void);extern void W20_SheildSetWindowDisplay(void);extern void W20_SheildSetWindowProcess(void);extern void W21_OpenSetWindowDisplay(void);extern void W21_OpenSetWindowProcess(void);extern void W22_SelfCheckWindowDisplay(void);extern void W22_SelfCheckWindowProcess(void);extern void W23_DeviceQueryWindowDisplay(void);extern void W23_DeviceQueryWindowProcess(void);extern void W24_AlarmWindowDisplay(void);extern void W24_AlarmWindowProcess(void);extern void W25_FaultWindowDisplay(void);extern void W25_FaultWindowProcess(void);extern void W26_SheildWindowDisplay(void);extern void W26_SheildWindowProcess(void);
typedef struct _WinClass
{    unsigned char UserLevel;
    unsigned char QuitWin;
    unsigned char property;
    unsigned char Pointer;
    unsigned char winclass_pr;
    unsigned char WinBranch[8];
    void (*WinDisplay)(void);//������ʾ����
    void (*KeyTask)(void);
}WIN_CLASS;
extern WIN_CLASS  const WinClass[];
extern void W1_MainWindowDisplay(void);
extern void W1_MainWindowProcess(void);WM_HWIN Create_W1_MainWindow(void);extern WM_HWIN Create_SysSet_Window(void);extern void Show_Message(unsigned char data);#if CODEBLACK_FLAGextern FILE *flash; //�ļ�ָ��#endif // CODEBLACK_FLAG
#endif // MYGUI_INIT_H_INCLUDED
