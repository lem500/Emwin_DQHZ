#include "DIALOG.h"
#include "gtya112-30.h"
#include "IMAGE.h"
#include "mygui_init.h"
#include <time.h>
#include <stdint.h>
#include <stdio.h>
//#include <windows.h>
//#include "../usr/stay24.h"
static unsigned char lastsec = 0;
unsigned char timee[30];
FILE *flash; //����洢�ļ�ָ��
void Dis_time(void)
{
    int i;
    for(i = 0;i < 30;i++)
    {
    if(WM_IsWindow(_hwTime[i])&&WM_IsVisible(_hwTime[i])){
    TEXT_SetText(_hwTime[i], timee);//
   // break;

    }



}
void MainTask(void) {
    time_t t;
    struct tm utcTime, tmp, *u=NULL, *tm_t;
    t=time(NULL);
    memcpy(&utcTime, gmtime(&t), sizeof(struct tm));
    u = localtime(&t);
	 WM_SetCreateFlags(WM_CF_MEMDEV);
	GUI_Init();
	mygui_init();
	//WinIndex = 0;


	WinLoad(WINDOW0_INDEX);
	 GUI_Exec();
	while(1)
    {
      //system("cls");
      time(&t);
      u = localtime(&t);
      if(u->tm_sec !=lastsec)
      {
          lastsec = u->tm_sec;
         sprintf(timee,"%d-%02d-%02d %02d:%02d:%02d",1900+u->tm_year,1+u->tm_mon,u->tm_mday,u->tm_hour,u->tm_min,u->tm_sec);
          Dis_time();

		}
		        Key_Task();
        //GUI_Exec();
        GUI_Delay(1);
         //	WM_HWIN	hWi = pMsg->hWin;
	   //    _hw=WM_GetDialogItem(hWi,ID_TEXT_10);
	   //    TEXT_SetFont(_hw,GUI_FONT_20_ASCII);
	    //   TEXT_SetText(_hw, RTC_CalendarShow());
      }
      //printf ("北京时间:%d.%d.%d ", (1900+u->tm_year), (1+u->tm_mon), u->tm_mday);
     // printf("%d:%d:%d\n", u->tm_hour, u->tm_min, u->tm_sec);




    }