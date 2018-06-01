#ifndef __PYINPUT_H
#define __PYINPUT_H


#define INPUTING_PY          0 //���뷨��ʼ״̬��
#define INPUT_PY_F           1 //���뷨������ƴ��
#define INPUT_SELECT_PY      2 //ƴ��ѡ����ϣ�����ѡ����
#define INPUT_SELECT_F       3 //�������
#define INPUT_SELECT_MB      4

#define NUM_MODE              1
#define HANZI_MODE			  0
#define ZIMU_MODE             2
#define QUWEI_MODE            3

//ƴ�������ƴ���Ķ�Ӧ��
typedef struct
{
  char *py_input;//������ַ���
  char *py;	   //��Ӧ��ƴ��
  char *pymb;	   //���
}py_index;

#define MAX_MATCH_PYMB 	10	//���ƥ����

//ƴ�����뷨
typedef struct
{
  char(*getpymb)(char *instr);			//�ַ���������ȡ����
  py_index *pymb[MAX_MATCH_PYMB];	//�����λ��
}pyinput;
typedef struct
{
  char(*get_zimu)(char *instr);			//�ַ���������ȡ����
  py_index *pymb[MAX_MATCH_PYMB];	//�����λ��
} zminput;

extern pyinput t9;
extern char str_match(char*str1,char*str2);
extern char get_matched_pymb(char *strin,py_index **matchlist);
extern char get_pymb(char* str);
extern char get_zimu(char *str);
extern void input_py(int x,int y, char* hanzi,char *info, char flag,char flag_value);


#endif








