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

#include "DIALOG.h"
#include "mygui_init.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x03)#define ID_TEXT_3 (GUI_ID_USER + 0x04)#define ID_TEXT_4 (GUI_ID_USER + 0x05)#define ID_TEXT_5 (GUI_ID_USER + 0x06)#define ID_TEXT_6 (GUI_ID_USER + 0x07)#define ID_TEXT_7 (GUI_ID_USER + 0x08)
#define ID_EDIT_0 (GUI_ID_USER + 0x09)
#define ID_EDIT_1 (GUI_ID_USER + 0x0A)#define ID_EDIT_2 (GUI_ID_USER + 0x0B)#define ID_EDIT_3 (GUI_ID_USER + 0x0C)#define ID_EDIT_4 (GUI_ID_USER + 0x0D)#define ID_EDIT_5 (GUI_ID_USER + 0x0E)#define ID_EDIT_6 (GUI_ID_USER + 0x0F)#define ID_TEXT_8 (GUI_ID_USER + 0x10)#define ID_EDIT_7 (GUI_ID_USER + 0x11)
// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/#if CODEBLACK_FLAGunsigned char canshushezhi_[] = "\xe5\x8f\x82\xe6\x95\xb0\xe8\xae\xbe\xe7\xbd\xae";extern dizz[];unsigned char zaixian[] = "\xe5\x9c\xa8\xe7\xba\xbf: ";unsigned char leixing[] = "\xe7\xb1\xbb\xe5\x9e\x8b:";unsigned char fazhi[] = "\xe9\x98\x80\xe5\x80\xbc:";unsigned char weizhi[] ="\xe4\xbd\x8d\xe7\xbd\xae:";unsigned char tongdao[] = "\xe9\x80\x9a\xe9\x81\x93:";#elseconst unsigned char canshushezhi_[] = "参数设置";extern dizz[];const unsigned char zaixian[] = "在线:";const unsigned char leixing[] = "类型:";const unsigned char fazhi[] = "阈值:";const unsigned char weizhi[] = "位置:";const unsigned char tongdao[] = "通道:";#endif // CODEBLACK_FLAG

// USER START (Optionally insert additional static data)
// USER END
static unsigned char Cursor_Edit = 0;
/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 320, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "0", ID_TEXT_0, 277, 293, 206, 28, 0, 0x0, 0 },
  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_1, 6, 293, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, canshushezhi_, ID_TEXT_2, 6, 1, 130, 30, 0, 0x0, 0 },  { TEXT_CreateIndirect, dizz, ID_TEXT_3, 112, 46, 80, 30, 0, 0x0, 0 },  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 172, 46, 43, 30, 0, 0x3, 0 },  { EDIT_CreateIndirect, "Edit", ID_EDIT_1, 229, 46, 43, 30, 0, 0x3, 0 },  { TEXT_CreateIndirect, zaixian, ID_TEXT_4, 112, 94, 80, 30, 0, 0x0, 0 },  { TEXT_CreateIndirect, leixing, ID_TEXT_5, 112, 142, 80, 30, 0, 0x0, 0 },  { EDIT_CreateIndirect, "Edit", ID_EDIT_2, 172, 94, 46, 30, 0, 0x3, 0 },  { EDIT_CreateIndirect, "Edit", ID_EDIT_3, 172, 140, 150, 30, 0, 0x14, 0 },  { TEXT_CreateIndirect, tongdao, ID_TEXT_6, 112, 190, 80, 30, 0, 0x0, 0 }, //通道:  { EDIT_CreateIndirect, "Edit", ID_EDIT_4, 172, 190, 30, 30, 0, 0x4, 0 }, //通道编辑框1  { EDIT_CreateIndirect, "Edit", ID_EDIT_7, 210, 190, 30, 30, 0, 0xc, 0 },//通道编辑框2  { EDIT_CreateIndirect, "Edit", ID_EDIT_6, 320, 190, 40, 30, 0, 0xc, 0 },//阀值编辑框  { TEXT_CreateIndirect, weizhi, ID_TEXT_7, 112, 238, 80, 30, 0, 0x0, 0 },  { EDIT_CreateIndirect, "Edit", ID_EDIT_5, 172, 238, 255, 30, 0, 0xc, 0 },  { TEXT_CreateIndirect, fazhi, ID_TEXT_8, 260, 190, 80, 30, 0, 0xc, 0 },//阈值:
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

  switch (pMsg->MsgId) {  case WM_PAINT :       if(WM_Paint_Flag == 1)       {           WM_Paint_Flag = 0;          GUI_SetColor(HFM_HEAD_BK);          GUI_FillRect(0,0,480,30);          GUI_FillRect(0,290,480,320);          GUI_SetBkColor(HFM_COLOR_BK);          GUI_SetColor(GUI_BLACK);          GUI_DispStringAt("-",219,53);          GUI_DispStringAt("-",203,200);          hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);          EDIT_EnableBlink(hItem, 300, 1);           //显示用户级别          hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);          sprintf(userstring,"\xe7\x94\xa8\xe6\x88\xb7\xe7\xba\xa7\xe5\x88\xab:%d",userlevel);
          TEXT_SetText(hItem, userstring);//       }    break;
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
        hItem = pMsg->hWin;
        WINDOW_SetBkColor(hItem, HFM_COLOR_BK);
    // USER START (Optionally insert additional code for further widget initialization)        hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);        _hwTime[7] = hItem;
       TEXT_SetFont(hItem, GUI_FONT_24_1);
       TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
       TEXT_SetText(hItem, timee);           hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    //    // Initialization of 'Edit'    //    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    //    // Initialization of 'Edit'    //    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    //    // Initialization of 'Edit'    //    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);     EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    //    // Initialization of 'Edit'    //    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);     EDIT_SetFont(hItem, GUI_FONT_20_ASCII);    //    // Initialization of 'Edit'    //    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_5);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_24_ASCII);    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_6);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_24_ASCII);    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_7);    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);     EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);    EDIT_SetFont(hItem, GUI_FONT_24_ASCII);
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
*/void W8_EditdeviceWindowDisplay(void)
{

}
void W8_EditdeviceWindowProcess(void)
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
	 case GUI_KEY_DOWN://下键         GUI_SendKeyMsg(GUI_KEY_TAB, 1);          if(Cursor_Edit < 5)          {              Cursor_Edit++;          }          else{            Cursor_Edit = 0;          }
          break;
	 case GUI_KEY_ESCAPE://取消键          Cursor_Edit = 0;
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
	case GUI_KEY_F1://F1功能键         if(Cursor_Edit == 5)         {          WinLastIndex = WINDOW_W28_INPUT_TEXT;          WinLoad(WINDOW_W28_INPUT_TEXT);         }
		break;
	case GUI_KEY_F2://F2功能键         GUI_SendKeyMsg(GUI_KEY_BACKSPACE, 1);
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
*       CreateWindow
*/

WM_HWIN Create_W8_Editdevice_Window(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
