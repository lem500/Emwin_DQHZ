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

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x03)
#define ID_PROGBAR_0 (GUI_ID_USER + 0x04)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
unsigned char zidongdengluu[] = "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x99\xbb\xe5\xbd\x95";
// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 320, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "0", ID_TEXT_0, 277, 293, 206, 28, 0, 0x0, 0 },
  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_1, 6, 293, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, zidongdengluu, ID_TEXT_2, 6, 1, 130, 30, 0, 0x0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_0, 149, 109, 142, 20, 0, 0x0, 0 },
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
  WM_HWIN hItem;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
        hItem = pMsg->hWin;
        WINDOW_SetBkColor(hItem, HFM_COLOR_BK);
    // USER START (Optionally insert additional code for further widget initialization)
       TEXT_SetFont(hItem, GUI_FONT_24_1);
       TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
       TEXT_SetText(hItem, timee);
    //
    // Initialization of 'Progbar'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    PROGBAR_SetFont(hItem, GUI_FONT_6X8);
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
*/
{

}
void W12_LooploginWindowProcess(void)
{
     switch(WinKeyValue)
     {
     case GUI_KEY_ENTER://ok��

          break;
     case GUI_KEY_HOME://�˵���ť
          break;
     case GUI_KEY_LEFT://���
          break;
	 case GUI_KEY_UP://�¼�
          break;
	 case GUI_KEY_DOWN://�¼�
          break;
	 case GUI_KEY_ESCAPE://ȡ����
            break;
	case GUI_USR_KEY_ALARM://�𾯽����
        break;
	case GUI_USR_KEY_FAULT://���Ͻ����
        break;
	case GUI_USR_KEY_SHEILD://���ν����
	    break;
	case GUI_USR_KEY_OUT://��������
		break;
	case GUI_USR_KEY_SLIENCE://������
		break;
	case GUI_USR_KEY_RESET://��λ��
		break;
	case GUI_KEY_F1://F1���ܼ�
		break;
	case GUI_KEY_F2://F2���ܼ�
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
WM_HWIN Create_W12_LoopLoginWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/