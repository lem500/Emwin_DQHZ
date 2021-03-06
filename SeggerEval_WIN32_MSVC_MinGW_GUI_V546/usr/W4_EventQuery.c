/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"#include "mygui_init.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

unsigned char xinxchaxun[]   = "\xe4\xbf\xa1\xe6\x81\xaf\xe6\x9f\xa5\xe8\xaf\xa2";unsigned char baojingxinxi[] ="1.\xe6\x8a\xa5\xe8\xad\xa6\xe4\xbf\xa1\xe6\x81\xaf";unsigned char shijianxinxi[] ="2.\xe4\xba\x8b\xe4\xbb\xb6\xe4\xbf\xa1\xe6\x81\xaf";unsigned char pingbixinxi[]  = "3.\xe5\xb1\x8f\xe8\x94\xbd\xe4\xbf\xa1\xe6\x81\xaf";unsigned char shuchuxinxi[]  = "4.\xe8\xbe\x93\xe5\x87\xba\xe4\xbf\xa1\xe6\x81\xaf";unsigned char xitongxinxi[]  = "5.\xe7\xb3\xbb\xe7\xbb\x9f\xe4\xbf\xa1\xe6\x81\xaf";unsigned char deviceinfo[] = "6.\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf";

// USER START (Optionally insert additional defines)
// USER END
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x03)
#define ID_TEXT_3 (GUI_ID_USER + 0x04)
#define ID_TEXT_4 (GUI_ID_USER + 0x05)
#define ID_TEXT_5 (GUI_ID_USER + 0x06)
#define ID_TEXT_6 (GUI_ID_USER + 0x07)#define ID_TEXT_7 (GUI_ID_USER + 0x08)#define ID_TEXT_8 (GUI_ID_USER + 0x09)
/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Framewin", ID_WINDOW_0,  0, 0, 480, 325, 0, 0x0, 0 },
  { TEXT_CreateIndirect, xinxchaxun, ID_TEXT_0, 6, 1, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, baojingxinxi, ID_TEXT_1, 155, 46, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, shijianxinxi, ID_TEXT_2, 155, 81, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, pingbixinxi, ID_TEXT_3, 155, 116, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, shuchuxinxi, ID_TEXT_4, 155, 151, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, xitongxinxi, ID_TEXT_5, 155, 186, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_6, 277, 293, 206, 28, 0, 0x0, 0 },  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_7, 6, 293, 206, 28, 0, 0x0, 0 },  { TEXT_CreateIndirect, deviceinfo, ID_TEXT_8, 155, 221, 130, 30, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;  unsigned char userstring[30];
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {        case WM_PAINT :            if(WM_Paint_Flag == 1)            {                WM_Paint_Flag = 0;              GUI_SetColor(HFM_HEAD_BK);              GUI_FillRect(0,0,480,30);              GUI_FillRect(0,290,480,320);                     //显示用户级别              hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_7);              sprintf(userstring,"\xe7\x94\xa8\xe6\x88\xb7\xe7\xba\xa7\xe5\x88\xab:%d",userlevel);
               TEXT_SetText(hItem, userstring);//            }    break;
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Framewin'
    //    hItem = pMsg->hWin;     WINDOW_SetBkColor(hItem,HFM_COLOR_BK);    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_6);    _hwTime[3] = hItem;        TEXT_SetFont(hItem, GUI_FONT_24_1);
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    hItem = pMsg->hWin;

    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/void W4_EventWindowDisplay(void)
{

}
void W4_EventWindowProcess(void)
{
     switch(WinKeyValue)
     {
     case GUI_KEY_ENTER://ok键

          break;
     case GUI_KEY_HOME://菜单按钮
          break;
     case GUI_KEY_LEFT://左键
          break;
	 case GUI_KEY_UP://下键
          break;
	 case GUI_KEY_DOWN://下键
          break;
	 case GUI_KEY_ESCAPE://取消键
            break;
	case GUI_USR_KEY_ALARM://火警界面键
        break;
	case GUI_USR_KEY_FAULT://故障界面键
        break;
	case GUI_USR_KEY_SHEILD://屏蔽界面键
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
		break;
	default :
			break;
     }
}
/*********************************************************************
*
*       CreateFramewin
*/

WM_HWIN Create_W4_EventQuery_Framewin(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
