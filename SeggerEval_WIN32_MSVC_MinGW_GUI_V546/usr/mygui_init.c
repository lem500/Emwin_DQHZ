#include <stdint.h>
#include "GUI.h"
#include "WM.h"
#include "dialog.h"

#include "mygui_init.h"#include "flash.h"static  FILE *fontfile;
unsigned char WinIndex;//界面索引
unsigned char WinLastIndex;unsigned char WinKeyValue = 0;unsigned char key_flag = 0;unsigned char userlevel = 0;//用户级别
WM_HWIN window0;//监控界面
WM_HWIN menu_window;//主菜单界面WM_HWIN keyboard_window;//小键盘WM_HWIN SysSet_window;//系统设置界面WM_HWIN W4_EventQuery_window;//信息查询界面WM_HWIN W5_TimeSet_window;//时间设置界面WM_HWIN W6_PrintSet_window;//打印设置界面WM_HWIN W7_PasswardSet_window;//密码设置界面WM_HWIN W8_Editdevice_window;//参数设置界面WM_HWIN W9_Communication_window;//通讯设置界面WM_HWIN W10_Reset_window;//系统初始化界面WM_HWIN W11_Update_window;//系统升级界面WM_HWIN W12_LoopLogin_window;//自动登录界面WM_HWIN W13_CrtSet_window;//CRT通信设置界面WM_HWIN W14_NetSet_window;//联网设置WM_HWIN W15_Alarm_window;//报警信息界面WM_HWIN W16_Event_window;//事件信息WM_HWIN W17_Sheild_window;//屏蔽事件WM_HWIN W18_Output_window;//输出事件WM_HWIN W19_Info_window;//系统信息界面WM_HWIN W20_SheildSet_window;//屏蔽界面WM_HWIN W21_OpenSet_window;//开放界面WM_HWIN W22_SelfCheck_window;//自检界面WM_HWIN W23_DeviceInfo_window;//设备信息WM_HWIN W24_AlarmWiM_window;;//报警界面WM_HWIN W25_Faultwindow;//故障界面WM_HWIN W26_Sheildwindow;//屏蔽界面WM_HWIN W_MessageBox;//弹出界面WM_HWIN W_PasswoedMessageBox;//密码输入框WM_HWIN _hwTime[30];//时间文本控件
void mygui_init(void)
{
    WM_SetCreateFlags(WM_CF_MEMDEV);    FRAMEWIN_SetDefaultClientColor(GUI_MAKE_COLOR(0x00808040));//±3?°??é?    FRAMEWIN_SetDefaultBorderSize(0);    FRAMEWIN_SetDefaultBarColor(0,GUI_BLACK);
	EDIT_SetDefaultTextAlign(GUI_TA_VCENTER);
	TEXT_SetDefaultFont(&GUI_Fontstay24);
	   GUI_UC_SetEncodeUTF8();
	 TEXT_SetDefaultTextColor(GUI_BLACK);
   //  keyboard_window= FHM_KeyBoard_Main();
	 window0 = Create_W1_MainWindow();    menu_window =Create_menu_Window();	 SysSet_window = Create_SysSet_Window();	 W4_EventQuery_window = Create_W4_EventQuery_Framewin();	 W5_TimeSet_window = Create_W5_TimeSet_Window();	 W6_PrintSet_window =Create_W6_PrintSet_Window();	 W7_PasswardSet_window = Create_W7_PasswardSet_Window();	W8_Editdevice_window = Create_W8_Editdevice_Window();	 W9_Communication_window = Create_W9_Comm_Window();	 W10_Reset_window =  Create_W10_Reset_Window();	 W11_Update_window = Create_W11_UPDATE_Window();	 W12_LoopLogin_window = Create_W12_LoopLoginWindow();	 W13_CrtSet_window = Create_W13_CRTSET_Window();	 W14_NetSet_window =  Create_W14_NetSet_Window();	 W15_Alarm_window = Create_W15_AlarmQuery_Window();	 W16_Event_window =  Create_W16_EventQuery_Window();	 W17_Sheild_window = Create_W17_SheildQuery_Window();	 W18_Output_window = Create_W18_OUTQuery_Window();	 W19_Info_window = Create_W19_InfoQuery_Window();	 W20_SheildSet_window =  Create_W20_SheildSet_Window();	 W21_OpenSet_window = Create_W21_OpenSet_Window();	 W22_SelfCheck_window = Create_W22_SelfCheck_Window();	 W23_DeviceInfo_window = Create_W23_DeviceInfo_Window();	 W24_AlarmWiM_window = Create_W24_AlarmWim_Window();	 W25_Faultwindow = Create_W25_FaultWim_Window();	 W26_Sheildwindow =  Create_W26_SheildWim_Window();	 W_MessageBox = Create_MessageBox_Framewin();     W_PasswoedMessageBox = CreatePassword();     WM_HideWindow(W_PasswoedMessageBox);	 WM_HideWindow(W_MessageBox);	 WM_HideWindow(W26_Sheildwindow);	 WM_HideWindow(W25_Faultwindow);	 WM_HideWindow(W24_AlarmWiM_window);
	 WM_HideWindow(menu_window);	 WM_HideWindow(SysSet_window);	 WM_HideWindow(W4_EventQuery_window);	 WM_HideWindow(W5_TimeSet_window);	 WM_HideWindow(W6_PrintSet_window);     WM_HideWindow(W7_PasswardSet_window);     WM_HideWindow(W8_Editdevice_window);     WM_HideWindow(W9_Communication_window);     WM_HideWindow(W10_Reset_window);     WM_HideWindow(W11_Update_window);     WM_HideWindow(W12_LoopLogin_window);     WM_HideWindow(W13_CrtSet_window);     WM_HideWindow(W14_NetSet_window);     WM_HideWindow(W15_Alarm_window);     WM_HideWindow(W16_Event_window);     WM_HideWindow(W17_Sheild_window);     WM_HideWindow(W18_Output_window);     WM_HideWindow(W19_Info_window);     WM_HideWindow(W15_Alarm_window);     WM_HideWindow(W20_SheildSet_window);     WM_HideWindow(W21_OpenSet_window);     WM_HideWindow(W22_SelfCheck_window);     WM_HideWindow(W23_DeviceInfo_window);
}
//窗口界面函数数组
WIN_CLASS   WinClass[] ={    //0    {    0,
    0,
    0,
    0,
    0,    0,
    0,0,0,0,0,0,0,0,
    W1_MainWindowDisplay,
    W1_MainWindowProcess,

},
    //1、监控界面
{    0,
    0,
    WIN_TYPE_TEXT,
    0,
    0,    &window0,
    0,0,0,0,0,0,0,0,
    W1_MainWindowDisplay,
    W1_MainWindowProcess,

},//2、主菜单界面
{    0,
    1,
    WIN_TYPE_MENU,
    5,
    1,    &menu_window,
    3,4,20,21,22,0,0,0,
    W2_menuWindowDisplay,
    W2_menuWindowProcess,
},//3、系统设置界面{    3,
    2,
    WIN_TYPE_MENU,
    7,
    1,    &SysSet_window,
    5,6,7,8,9,10,11,0,
    W3_SystemWindowDisplay,
    W3_SystemWindowProcess,
},//4、信息查询界面{    0,
    2,
    WIN_TYPE_MENU,
    5,
    1,    &W4_EventQuery_window,
    15,16,17,18,19,23,0,0,
    W4_EventWindowDisplay,
    W4_EventWindowProcess,
},//5、时间设置界面{    0,
    3,
    WIN_TYPE_EDIT,
    0,
    1,    &W5_TimeSet_window,
    0,0,0,0,0,0,0,0,
    W5_TimeSetWindowDisplay,
    W5_TimeSetWindowProcess,
},//6、打印设置界面{    0,
    3,
    WIN_TYPE_EDIT,
    0,
    1,    &W6_PrintSet_window,
    0,0,0,0,0,0,0,0,
    W6_PrintSetWindowDisplay,
    W6_PrintSetWindowProcess,
},//7,密码设置界面{    0,
    3,
    WIN_TYPE_EDIT,
    0,
    1,    &W7_PasswardSet_window,
    0,0,0,0,0,0,0,0,
    W7_PassWordSetWindowDisplay,
    W7_PassWordSetWindowProcess,
},//8,参数设置界面{    0,
    3,
    WIN_TYPE_MENU,
    0,
    1,    &W8_Editdevice_window,
    0,0,0,0,0,0,0,0,
    W8_EditdeviceWindowDisplay,
    W8_EditdeviceWindowProcess,
},//9,通讯设置界面{    0,
    3,
    WIN_TYPE_MENU,
    0,
    1,    &W9_Communication_window,
    12,13,14,0,0,0,0,0,
    W9_CommunicationWindowDisplay,
    W9_CommunicationWindowProcess,
},//10,系统初始化界面{    0,
    3,
    WIN_TYPE_EDIT,
    0,
    1,    &W10_Reset_window,
    0,0,0,0,0,0,0,0,
    W10_ResetWindowDisplay,
    W10_ResetWindowProcess,
},//11,系统升级界面{    0,
    3,
    WIN_TYPE_TEXT,
    0,
    1,    &W11_Update_window,
    0,0,0,0,0,0,0,0,
    W11_UpdateWindowDisplay,
    W11_UpdateWindowProcess,
},//12,自动登录界面{    0,
    9,
    WIN_TYPE_TEXT,
    0,
    1,    &W12_LoopLogin_window,
    0,0,0,0,0,0,0,0,
    W12_LooploginWindowDisplay,
    W12_LooploginWindowProcess,
},//13,CRT设置界面{    0,
    9,
    WIN_TYPE_TEXT,
    0,
    1,    &W13_CrtSet_window,
    0,0,0,0,0,0,0,0,
    W13_CrtSetWindowDisplay,
    W13_CrtSetWindowProcess,
},//14,联网设置{    0,
    9,
    WIN_TYPE_TEXT,
    0,
    1,    &W14_NetSet_window,
    0,0,0,0,0,0,0,0,
    W14_NetSetWindowDisplay,
    W14_NetSetWindowProcess,
},//15,报警事件{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W15_Alarm_window,
    0,0,0,0,0,0,0,0,
    W15_AlarmQueryWindowDisplay,
    W15_AlarmQueryWindowProcess,
},//16,事件信息{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W16_Event_window,
    0,0,0,0,0,0,0,0,
    W16_EventQueryWindowDisplay,
    W16_EventQueryWindowProcess,
},//17,屏蔽信息{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W17_Sheild_window,
    0,0,0,0,0,0,0,0,
    W17_SheildQueryWindowDisplay,
    W17_SheildQueryWindowProcess,
},//18,输出信息{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W18_Output_window,
    0,0,0,0,0,0,0,0,
    W18_OutQueryWindowDisplay,
    W18_OutQueryWindowProcess,
},//19,系统信息{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W19_Info_window,
    0,0,0,0,0,0,0,0,
    W19_InfoQueryWindowDisplay,
    W19_InfoQueryWindowProcess,
},//20,屏蔽界面{    0,
    2,
    WIN_TYPE_EDIT,
    0,
    1,    &W20_SheildSet_window,
    0,0,0,0,0,0,0,0,
    W20_SheildSetWindowDisplay,
    W20_SheildSetWindowProcess,
},//21,开放界面{    0,
    2,
    WIN_TYPE_EDIT,
    0,
    1,    &W21_OpenSet_window,
    0,0,0,0,0,0,0,0,
    W21_OpenSetWindowDisplay,
    W21_OpenSetWindowProcess,
},//22,自检界面{    0,
    2,
    WIN_TYPE_TEXT,
    0,
    1,    &W22_SelfCheck_window,
    0,0,0,0,0,0,0,0,
    W22_SelfCheckWindowDisplay,
    W22_SelfCheckWindowProcess,
},//23,设备信息{    0,
    4,
    WIN_TYPE_TEXT,
    0,
    1,    &W23_DeviceInfo_window,
    0,0,0,0,0,0,0,0,
    W23_DeviceQueryWindowDisplay,
    W23_DeviceQueryWindowProcess,
},
//24,报警界面{    0,
    1,
    WIN_TYPE_TEXT,
    0,
    1,    &W24_AlarmWiM_window,
    0,0,0,0,0,0,0,0,
    W24_AlarmWindowDisplay,
    W24_AlarmWindowProcess,
},//25，故障界面{    0,
    1,
    WIN_TYPE_TEXT,
    0,
    1,    &W25_Faultwindow,
    0,0,0,0,0,0,0,0,
    W25_FaultWindowDisplay,
    W25_FaultWindowProcess,
},//26，屏蔽界面{    0,
    1,
    WIN_TYPE_TEXT,
    0,
    1,    &W26_Sheildwindow,
    0,0,0,0,0,0,0,0,
    W26_SheildWindowDisplay,
    W26_SheildWindowProcess,
},//27 密码输入界面{    0,
    1,
    WIN_TYPE_TEXT,
    0,
    1,    &W26_Sheildwindow,
    0,0,0,0,0,0,0,0,
    W27_PasswordMessageBoxDisplay,
    W27_PasswordMessageBoxProcess,
},




};
//载入界面
void WinLoad(unsigned char index)
{    WM_HWIN active_Win;
   WinIndex = index;
   switch(index)
   {
   case WINDOW0_INDEX:
  //  active_Win =  WM_GetActiveWindow();
       WM_ShowWindow(window0);      //  WM_HideWindow(active_Win);
       WM_HideWindow(menu_window);       WM_HideWindow(SysSet_window);       WM_HideWindow(W4_EventQuery_window);       WM_HideWindow(W5_TimeSet_window);       WM_HideWindow(W6_PrintSet_window);       WM_HideWindow(W9_Communication_window);       WM_HideWindow(W24_AlarmWiM_window);       WM_HideWindow(W25_Faultwindow);       WM_HideWindow(W26_Sheildwindow);       WM_HideWindow(W_MessageBox);       WM_SetFocus(window0);
    break;
   case WINDOW_MENU_INDEX:
        WM_ShowWindow(menu_window);
        WM_HideWindow(window0);        WM_HideWindow(SysSet_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(W5_TimeSet_window);        WM_HideWindow(W6_PrintSet_window);        WM_HideWindow(W9_Communication_window);        WM_HideWindow(W20_SheildSet_window);        WM_HideWindow(W21_OpenSet_window);        WM_HideWindow(W22_SelfCheck_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(menu_window);
    break;    case WINDOW_SYSSET_INDEX:
        WM_ShowWindow(SysSet_window);
        WM_HideWindow(window0);        WM_HideWindow(menu_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(W5_TimeSet_window);        WM_HideWindow(W6_PrintSet_window);        WM_HideWindow(W9_Communication_window);        WM_HideWindow( W7_PasswardSet_window);        WM_HideWindow(W8_Editdevice_window);        WM_HideWindow(W10_Reset_window);        WM_HideWindow(W11_Update_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(SysSet_window);
    break;   case WINDOW_W4_EVENTQUERY:        WM_ShowWindow(W4_EventQuery_window);
        WM_HideWindow(menu_window);        WM_HideWindow(W15_Alarm_window);        WM_HideWindow(W16_Event_window);        WM_HideWindow(W17_Sheild_window);        WM_HideWindow(W18_Output_window);        WM_HideWindow(W19_Info_window);        WM_HideWindow(W23_DeviceInfo_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W4_EventQuery_window);    break;    case WINDOW_W5_TIMESET:        WM_ShowWindow(W5_TimeSet_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(window0);
        WM_HideWindow(menu_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W6_PrintSet_window);        WM_HideWindow(W9_Communication_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W5_TimeSet_window);    break;    case WINDOW_W6_PRINTSET:        WM_ShowWindow(W6_PrintSet_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(window0);
        WM_HideWindow(menu_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W5_TimeSet_window);        WM_HideWindow(W9_Communication_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W6_PrintSet_window);        break;    case WINDOWS_W7_PASSWARDSET:        WM_ShowWindow(W7_PasswardSet_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(window0);
        WM_HideWindow(menu_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W5_TimeSet_window);        WM_HideWindow(W6_PrintSet_window);        WM_HideWindow(W9_Communication_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W7_PasswardSet_window);        break;    case WINDOWS_W8_EDITDEVICE:        WM_ShowWindow(W8_Editdevice_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W8_Editdevice_window);
        break;    case WINDOW_W9_COMMUNCTIONSEET:        WM_ShowWindow(W9_Communication_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W12_LoopLogin_window);        WM_HideWindow(W13_CrtSet_window);        WM_HideWindow(W14_NetSet_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W9_Communication_window);        break;    case WINDOW_W10_RESET:        WM_ShowWindow(W10_Reset_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W10_Reset_window);        break;    case WINDOW_W11_UPDATESYS:        WM_ShowWindow(W11_Update_window);        WM_HideWindow(SysSet_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W11_Update_window);        break;    case WINDOW_W12_LOOPLOGIN:         WM_ShowWindow(W12_LoopLogin_window);         WM_HideWindow(W9_Communication_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W12_LoopLogin_window);         //WM_HideWindow(W12_LoopLogin_window);         break;    case WINDOW_W13_CRTSET:         WM_ShowWindow(W13_CrtSet_window);         WM_HideWindow(W9_Communication_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W13_CrtSet_window);        break;    case WINDOW_W14_NETSET:         WM_ShowWindow(W14_NetSet_window);         WM_HideWindow(W9_Communication_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W14_NetSet_window);        break;    case WINDOW_W15_ALARM:         WM_ShowWindow(W15_Alarm_window);         WM_HideWindow(W4_EventQuery_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W15_Alarm_window);         break;    case WINDOW_W16_EVENT:         WM_ShowWindow(W16_Event_window);         WM_HideWindow(W4_EventQuery_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W16_Event_window);        break;    case WINDOW_W17_SHEILD:         WM_ShowWindow(W17_Sheild_window);         WM_HideWindow(W4_EventQuery_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W17_Sheild_window);        break;    case WINDOW_W18_OUT:         WM_ShowWindow(W18_Output_window);         WM_HideWindow(W4_EventQuery_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W18_Output_window);        break;    case WINDOW_W19_INFO:        WM_ShowWindow(W19_Info_window);        WM_HideWindow(W4_EventQuery_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W19_Info_window);        break;    case WINDOW_W20_SheildSet:        WM_ShowWindow(W20_SheildSet_window);        WM_HideWindow(menu_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W20_SheildSet_window);        break;    case WINDOW_W21_OpenSet:        WM_ShowWindow(W21_OpenSet_window);        WM_HideWindow(menu_window);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W21_OpenSet_window);        break;    case WINDOW_W22_Zijian:         WM_ShowWindow(W22_SelfCheck_window);         WM_HideWindow(menu_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W22_SelfCheck_window);        break;    case WINDOW_W23_DeviceInfo:         WM_ShowWindow(W23_DeviceInfo_window);         WM_HideWindow(W4_EventQuery_window);         WM_HideWindow(W_MessageBox);         WM_SetFocus(W23_DeviceInfo_window);        break;    case WINDOW_W24_ALARWIM:        WM_ShowWindow(W24_AlarmWiM_window);        WM_HideWindow(window0);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W24_AlarmWiM_window);        break;    case WINDOW_W25_FAULTWIM:        WM_ShowWindow(W25_Faultwindow);        WM_HideWindow(window0);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W25_Faultwindow);        break;    case WINDOW_W26_SHEILDWIM:        WM_ShowWindow(W26_Sheildwindow);        WM_HideWindow(window0);        WM_HideWindow(W_MessageBox);        WM_SetFocus(W26_Sheildwindow);        break;    case WINDOW_W27_PASSWORDWIN:        WM_ShowWindow(W_PasswoedMessageBox);        WM_SetFocus(W_PasswoedMessageBox);        break;
   }   WinClass[WinIndex].WinDisplay();   GUI_Exec();
}
void WinKeyProcess(void)
{
    unsigned char winindex = 0;
     WinClass[WinIndex].KeyTask();//进入窗口函数
     switch(WinKeyValue)
     {
     case GUI_KEY_ENTER://ok键

          break;
     case GUI_KEY_HOME://菜单按钮         if(WinIndex !=WINDOW_W27_PASSWORDWIN)         {
           WinLoad(WINDOW_MENU_INDEX);         }
          break;
     case GUI_KEY_LEFT://左键
          break;
	 case GUI_KEY_UP://下键
          break;
	 case GUI_KEY_DOWN://下键
          break;
	 case GUI_KEY_ESCAPE://取消键          if(WinIndex !=WINDOW_W27_PASSWORDWIN)          {
		   winindex = WinClass[WinIndex].QuitWin;
			if(winindex == 0)
			{
			  break;
			}
			WinLoad(winindex);          }
            break;
	case GUI_USR_KEY_ALARM://火警界面键	    WinLoad(WINDOW_W24_ALARWIM);
        break;
	case GUI_USR_KEY_FAULT://故障界面键	    WinLoad(WINDOW_W25_FAULTWIM);
        break;
	case GUI_USR_KEY_SHEILD://屏蔽界面键         WinLoad(WINDOW_W26_SHEILDWIM);
	    break;
	case GUI_USR_KEY_OUT://输出界面键
		break;
	case GUI_USR_KEY_SLIENCE://消音键
		break;
	case GUI_USR_KEY_RESET://复位键
		break;
	case GUI_KEY_F1://F1功能键
		break;
	case GUI_KEY_F2://F2功能键
		break;
	case '0':
		break;
	case '1':
	case '2':
	case '3':
	case '4':
    case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		if(WinClass[WinIndex].property == WIN_TYPE_MENU)
			{
			   winindex = WinClass[WinIndex].WinBranch[WinKeyValue-0x31];
			   if(winindex == 0)
			   	{
			   	  return;
			   	}
			   WinLoad(winindex);
			}
		break;
	default :
			break;
     }
     key_flag = 0;     WinKeyValue = 0;
}
//按键处理程序
void Key_Task(void)
{
   if(key_flag)
   {
      WinKeyProcess();
   }
}/*********************存储初始化*************************************/ void myflash_init(void){    int i;    int temp;    int rc;    unsigned char tempflash[4096];    /*****************************************************************************//**********************打开文件，如果打开失败，创建新的文件***************************************/    memset(tempflash,0xff,4096);    if(flash = fopen("flash.bin","r") == NULL)    {       flash = fopen("flash.bin","wb+");       for(i = 0;i < 1024;i++)       {           fwrite(tempflash,1,4096,flash);       }       fclose(flash);    }    //加载字库      flash = fopen("flash.bin","rb+");      fseek(flash,SPIFLASH_FONT_BASEADDR,SEEK_SET);      fontfile = fopen("ZK.bin","rb");      i = 0;    while( (rc = fread(tempflash,sizeof(unsigned char), 1024,fontfile)) != 0 )    {        fwrite( tempflash, sizeof( unsigned char ), rc, flash );    }     fclose(flash);     fclose(fontfile);    Flash_Read_SysSet((unsigned char*)&system_config.Level_1_Password[0]);    if(system_config.Level_1_Password[0] == 0xff)    {        //初始化系统设置结构体        memset((unsigned char*)&system_config.Level_1_Password[0],0x31,8);        memset((unsigned char*)&system_config.Level_2_Password[0],0x32,8);        memset((unsigned char*)&system_config.Level_3_Password[0],0x33,8);        memset((unsigned char*)&system_config.R1[0],0,232);        Flash_Write_SysSet((unsigned char*)&system_config.Level_1_Password[0]);    }}/**********************存储初始化*************************************/
