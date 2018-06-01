#ifndef __PYINPUT_H
#define __PYINPUT_H


#define INPUTING_PY          0 //输入法初始状态，
#define INPUT_PY_F           1 //输入法输入完拼音
#define INPUT_SELECT_PY      2 //拼音选择完毕，可以选择汉字
#define INPUT_SELECT_F       3 //输入完毕
#define INPUT_SELECT_MB      4

#define NUM_MODE              1
#define HANZI_MODE			  0
#define ZIMU_MODE             2
#define QUWEI_MODE            3

//拼音码表与拼音的对应表
typedef struct
{
  char *py_input;//输入的字符串
  char *py;	   //对应的拼音
  char *pymb;	   //码表
}py_index;

#define MAX_MATCH_PYMB 	10	//最大匹配数

//拼音输入法
typedef struct
{
  char(*getpymb)(char *instr);			//字符串到码表获取函数
  py_index *pymb[MAX_MATCH_PYMB];	//码表存放位置
}pyinput;
typedef struct
{
  char(*get_zimu)(char *instr);			//字符串到码表获取函数
  py_index *pymb[MAX_MATCH_PYMB];	//码表存放位置
} zminput;

extern pyinput t9;
extern char str_match(char*str1,char*str2);
extern char get_matched_pymb(char *strin,py_index **matchlist);
extern char get_pymb(char* str);
extern char get_zimu(char *str);
extern void input_py(int x,int y, char* hanzi,char *info, char flag,char flag_value);


#endif








