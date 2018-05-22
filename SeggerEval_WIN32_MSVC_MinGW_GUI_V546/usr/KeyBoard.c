#include "DIALOG.h"
#include "mygui_init.h"
//#include "FHM.h"
//extern GUI_CONST_STORAGE GUI_FONT GUI_FontHT24;

const int pX=520,pY=200;
//
// Array of keys
//
static int _aKey[] = { GUI_KEY_BACKSPACE, GUI_KEY_ENTER, GUI_KEY_TAB, GUI_KEY_DELETE, GUI_KEY_LEFT, GUI_KEY_RIGHT};

//
// Dialog resource of numpad
//
static const GUI_WIDGET_CREATE_INFO _aDialogNumPad0[] = {//地址设置
//
//  Function                 Text      Id                 Px   Py   Dx   Dy
//
  { WINDOW_CreateIndirect, NULL,        0,     550,260,  245,205,0},

  { BUTTON_CreateIndirect,   "6",      GUI_ID_USER +  6,  5,   5 ,  55,45},//6
	{ BUTTON_CreateIndirect,   "7",      GUI_ID_USER +  7,  65,  5 ,  55,45},//7
  { BUTTON_CreateIndirect,   "8",      GUI_ID_USER +  8,  125, 5 ,  55,45},//8
  { BUTTON_CreateIndirect,   "9",      GUI_ID_USER +  9,  185, 5 ,  55,45},//9

  { BUTTON_CreateIndirect,   "2",      GUI_ID_USER +  2,  5,   55,  55,45},//2
  { BUTTON_CreateIndirect,   "3",      GUI_ID_USER +  3,  65,  55,  55,45},//3
	{ BUTTON_CreateIndirect,   "4",      GUI_ID_USER +  4,  125, 55,  55,45},//4
  { BUTTON_CreateIndirect,   "5",      GUI_ID_USER +  5,  185, 55,  55,45},//5

  { BUTTON_CreateIndirect,   "0",      GUI_ID_USER +  0,   5,  105,  55,45},//
	{ BUTTON_CreateIndirect,   "1",      GUI_ID_USER +  1,  65,  105,  55,45},//
  { BUTTON_CreateIndirect, 	 "退格",		 GUI_ID_USER + 10,  125, 105,  55,45},//
	{ BUTTON_CreateIndirect, 	 "回车",		 GUI_ID_USER + 11,  185, 105,  55,45},//

	{ BUTTON_CreateIndirect,   "TAB",    GUI_ID_USER + 12,   5, 155,  55,45},//
  { BUTTON_CreateIndirect,   "DEL",    GUI_ID_USER + 13,  65, 155,  55,45},//
  { BUTTON_CreateIndirect,   "<-",        GUI_ID_USER + 14, 125, 155,  55,45},//左移
  { BUTTON_CreateIndirect,   "->",        GUI_ID_USER + 15, 185, 155,  55,45},//右移
};


static void _cbDialogNumPad(WM_MESSAGE * pMsg)
{

  unsigned i;
  int      NCode;
  unsigned Id;
  int      Pressed;
  WM_HWIN  hDlg;
  WM_HWIN  hItem;

  Pressed = 0;
  hDlg = pMsg->hWin;
  switch (pMsg->MsgId) {
  case WM_PAINT:
    break;
  case WM_INIT_DIALOG:
    for (i = 0; i <16; i++) {
      hItem = WM_GetDialogItem(hDlg, GUI_ID_USER + i);
      BUTTON_SetFocussable(hItem, 0);                       /* Set all buttons non focussable */
    }
    WM_GetDialogItem(hDlg, GUI_ID_USER + 12);
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);      /* Id of widget */
    NCode = pMsg->Data.v;                 /* Notification code */
    switch (NCode) {
    case WM_NOTIFICATION_CLICKED:
      Pressed = 1;
    case WM_NOTIFICATION_RELEASED:
      if ((Id >= GUI_ID_USER) && (Id <= (GUI_ID_USER + 15))) {//按键了
        int Key;
        if (Id < GUI_ID_USER + 10) {//按下了数字键
          char acBuffer[10];
          BUTTON_GetText(pMsg->hWinSrc, acBuffer, sizeof(acBuffer)); /* Get the text of the button */
          Key = acBuffer[0];
        } else {//按下了功能键
          Key = _aKey[Id - GUI_ID_USER - 10];                        /* Get the text from the array */
        }
        GUI_SendKeyMsg(Key, Pressed);                                /* Send a key message to the focussed window */
      }
      break;
    }

  default:
    WM_DefaultProc(pMsg);
  }
}

WM_HWIN FHM_KeyBoard_Main()
{
	WM_HWIN hNumPad;
	hNumPad = GUI_CreateDialogBox(_aDialogNumPad0, GUI_COUNTOF(_aDialogNumPad0), _cbDialogNumPad, WM_HBKWIN, 0, 0);
    WM_SetStayOnTop(hNumPad, 1);
	return hNumPad;
}#if 0void MainTask(void) {
	 WM_SetCreateFlags(WM_CF_MEMDEV);
	GUI_Init();
	//mygui_init();
	//WinIndex = 0;
	//window0 = CreateWindow();
	FHM_KeyBoard_Main();	//WinLoad(WINDOW0_INDEX);	GUI_Delay(1);
	 GUI_Exec();
	while(1)
    {
        //Key_Task();
        //GUI_Exec();        GUI_Delay(1);

    }
}#endif // 0
