#ifndef MYGUI_INIT_H_INCLUDED
#define MYGUI_INIT_H_INCLUDED
#include "GUI.h"
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
#define ID_TEXT_17 (GUI_ID_USER + 0x15)
#define ID_TEXT_19 (GUI_ID_USER + 0x17)
//W3��Ϣ��ѯ�����ı�
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
#define GUI_USR_KEY_RESET             43
#define LCD_INVALID_WIN			0

//��������
#define WINDOW0_INDEX          1//��ؽ���
#define WINDOW_MENU_INDEX      2 //���˵�����
extern unsigned char WinIndex;//��������
extern unsigned char WinLastIndex;
extern WM_HWIN window0;//��ؽ���
extern WM_HWIN menu_window;//���˵�����
extern void mygui_init(void);
extern WM_HWIN FHM_KeyBoard_Main(void);
extern WM_HWIN Create_menu1_Window(void);
extern WM_HWIN Create_W4_EventQuery_Framewin(void);
extern WM_HWIN menu_window;//���˵�����
typedef struct _WinClass
{
    unsigned char QuitWin;
    unsigned char property;
    unsigned char Pointer;
    unsigned char winclass_pr;
    unsigned char WinBranch[8];
    void (*WinDisplay)(void);//������ʾ����
    void (*KeyTask)(void);
}WIN_CLASS;
extern WIN_CLASS  WinClass[];
extern void W1_MainWindowDisplay(void);
extern void W1_MainWindowProcess(void);
#endif // MYGUI_INIT_H_INCLUDED