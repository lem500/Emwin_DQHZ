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
unsigned char timee[30];SYSTEM_CONFIG systemset;//系统设置#if CODEBLACK_FLAG
unsigned char tempflash[4096];FILE *flash; //定义存储文件指针#endif
void Dis_time(void)
{
    int i;
    for(i = 0;i < 30;i++)
    {
    if(WM_IsWindow(_hwTime[i])&&WM_IsVisible(_hwTime[i])){            TEXT_SetFont(_hwTime[i], GUI_FONT_24_1);    TEXT_SetTextAlign(_hwTime[i], GUI_TA_LEFT | GUI_TA_VCENTER);
    TEXT_SetText(_hwTime[i], timee);//
   // break;
    }
    }



}/**************************************************************************///键值输入static void _cbKey0(int key, int state) { //键值0  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '0';    GUI_SendKeyMsg('0', state);  }}static void _cbKey1(int key, int state) { //键值1  GUI_USE_PARA(key);  GUI_USE_PARA(state);    if(state == 1)  {    key_flag = 1;    WinKeyValue = '1';    GUI_SendKeyMsg('1', state);  }}static void _cbKey2(int key, int state) { //键值2  GUI_USE_PARA(key);  GUI_USE_PARA(state);    if(state == 1)  {    key_flag = 1;    WinKeyValue = '2';    GUI_SendKeyMsg('2', state);  }}static void _cbKey3(int key, int state) { //键值3  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {   key_flag = 1;   WinKeyValue = '3';   GUI_SendKeyMsg('3', state);  }}static void _cbKey4(int key, int state) { //键值4  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '4';   GUI_SendKeyMsg('4', state);  }}static void _cbKey5(int key, int state) { //键值5  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '5';    GUI_SendKeyMsg('5', state);  }}static void _cbKey6(int key, int state) { //键值6  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '6';    GUI_SendKeyMsg('6', state);  }}static void _cbKey7(int key, int state) { //键值7  GUI_USE_PARA(key);  GUI_USE_PARA(state);   if(state == 1)   {     key_flag = 1;     WinKeyValue = '7';     GUI_SendKeyMsg('7', state);   }}static void _cbKey8(int key, int state) { //键值8  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '8';    GUI_SendKeyMsg('8', state);  }}static void _cbKey9(int key, int state) { //键值9  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = '9';    GUI_SendKeyMsg('9', state);  }}static void _cbKey_ESCAPE(int key, int state) { //返回键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_ESCAPE;  }  //GUI_SendKeyMsg(GUI_KEY_ESCAPE, state);}static void _cbKey_ENTER(int key, int state) { //确定键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_ENTER;    GUI_SendKeyMsg(GUI_KEY_ENTER, state);  }}static void _cbKey_SELIENCE(int key, int state) { //消音键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_USR_KEY_SLIENCE;  }// GUI_SendKeyMsg(GUI_USR_KEY_SLIENCE, state);}static void _cbKey_RESET(int key, int state) { //复位键  GUI_USE_PARA(key);  GUI_USE_PARA(state);    if(state == 1)    {      key_flag = 1;      WinKeyValue = GUI_USR_KEY_RESET;    }// GUI_SendKeyMsg(GUI_USR_KEY_RESET, state);}static void _cbKey_UP(int key, int state) { //上键  GUI_USE_PARA(key);  GUI_USE_PARA(state); if(state == 1) {    key_flag = 1;    WinKeyValue = GUI_KEY_UP;    GUI_SendKeyMsg(GUI_KEY_UP, state); }}static void _cbKey_LEFT(int key, int state) { //左键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_LEFT;    GUI_SendKeyMsg(GUI_KEY_LEFT, state);  }}static void _cbKey_DOWN(int key, int state) { //下键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_DOWN;    GUI_SendKeyMsg(GUI_KEY_DOWN, state);  }}static void _cbKey_Home(int key, int state) { //菜单键  GUI_USE_PARA(key);  GUI_USE_PARA(state);    if(state == 1)    {      key_flag = 1;      WinKeyValue = GUI_KEY_HOME;    }// GUI_SendKeyMsg(GUI_KEY_HOME, state);}static void _cbKey_RIGHT(int key, int state) { //右键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_RIGHT;    GUI_SendKeyMsg(GUI_KEY_RIGHT, state);  }}static void _cbKey_F1(int key, int state) { //F1键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_F1;  } //GUI_SendKeyMsg(GUI_KEY_F1, state);}static void _cbKey_F2(int key, int state) { //F2键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_KEY_F2;  } //GUI_SendKeyMsg(GUI_KEY_F2, state);}static void _cbKey_Alarm(int key, int state) { //火警键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_USR_KEY_ALARM;    GUI_SendKeyMsg(GUI_USR_KEY_ALARM, state);  }}static void _cbKey_Fault(int key, int state) { //故障键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_USR_KEY_FAULT;    GUI_SendKeyMsg(GUI_USR_KEY_FAULT, state);  }}static void _cbKey_Sheild(int key, int state) { //屏蔽键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_USR_KEY_SHEILD;    GUI_SendKeyMsg(GUI_USR_KEY_SHEILD, state);  }}static void _cbKey_Out(int key, int state) { //输出键  GUI_USE_PARA(key);  GUI_USE_PARA(state);  if(state == 1)  {    key_flag = 1;    WinKeyValue = GUI_USR_KEY_OUT;    GUI_SendKeyMsg(GUI_USR_KEY_OUT, state);  }}/***************************************************************************/#if 1
void MainTask(void) {    int i;
    time_t t;
    struct tm utcTime, tmp, *u=NULL, *tm_t;
    t=time(NULL);
    memcpy(&utcTime, gmtime(&t), sizeof(struct tm));
    u = localtime(&t);
	 WM_SetCreateFlags(WM_CF_MEMDEV);
	GUI_Init();
	mygui_init();/*********************************************************************************************************************************************/ SIM_HARDKEY_SetCallback(0, _cbKey1); SIM_HARDKEY_SetCallback(1, _cbKey2); SIM_HARDKEY_SetCallback(2, _cbKey3); SIM_HARDKEY_SetCallback(3, _cbKey_Alarm); SIM_HARDKEY_SetCallback(4, _cbKey4);// SIM_HARDKEY_SetCallback(5, _cbKey_SELIENCE); SIM_HARDKEY_SetCallback(6, _cbKey_RESET); //SIM_HARDKEY_SetCallback(7, _cbKey4);// SIM_HARDKEY_SetCallback(8, _cbKey_UP); SIM_HARDKEY_SetCallback(9, _cbKey4); SIM_HARDKEY_SetCallback(10, _cbKey5); SIM_HARDKEY_SetCallback(11, _cbKey6); SIM_HARDKEY_SetCallback(12, _cbKey_Fault);// SIM_HARDKEY_SetCallback(14, _cbKey7); SIM_HARDKEY_SetCallback(15, _cbKey_LEFT); SIM_HARDKEY_SetCallback(16, _cbKey_RIGHT); SIM_HARDKEY_SetCallback(19, _cbKey_Home); SIM_HARDKEY_SetCallback(24, _cbKey7); SIM_HARDKEY_SetCallback(25, _cbKey8); SIM_HARDKEY_SetCallback(26, _cbKey9); SIM_HARDKEY_SetCallback(27, _cbKey_Sheild); SIM_HARDKEY_SetCallback(28, _cbKey_DOWN); SIM_HARDKEY_SetCallback(30, _cbKey_F1); SIM_HARDKEY_SetCallback(32, _cbKey_F2); SIM_HARDKEY_SetCallback(34, _cbKey_ESCAPE); SIM_HARDKEY_SetCallback(35, _cbKey0); SIM_HARDKEY_SetCallback(36, _cbKey_ENTER); SIM_HARDKEY_SetCallback(37, _cbKey_Out);/*****************************************************************************//**********************打开文件，如果打开失败，创建新的文件***************************************/    memset(tempflash,0xff,4096);    if(flash = fopen("flash.bin","r") == NULL)    {       flash = fopen("flash.bin","wb+");       for(i = 0;i < 1024;i++)       {           fwrite(tempflash,1,4096,flash);       }       fclose(flash);    }
	//WinIndex = 0;


	WinLoad(WINDOW0_INDEX);
	 GUI_Exec();	i =  SIM_HARDKEY_GetNum();
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
      //printf ("鍖椾含鏃堕棿:%d.%d.%d ", (1900+u->tm_year), (1+u->tm_mon), u->tm_mday);
     // printf("%d:%d:%d\n", u->tm_hour, u->tm_min, u->tm_sec);




    }    #endif // 0