#ifndef _DATASTRUCT_H
#define _DATASTRUCT_H


//系统配置数据结构，256BYTES
typedef struct
{
	U8	Level_1_Password[8];    //一级密码     1111
	U8	Level_2_Password[8];    //二级密码     2222
	U8	Level_3_Password[8];    //三级密码     3333

	U8	R1[8];    				//数组备用
	U8	R2[8];    				//数组备用
	U8	R3[8];    				//数组备用   48
	
	U16	ControllerID;           //机号         1  
    U16 IP_Port;                //服务器端口号 0
	U16	R16_1;           		//16位备用     1  
    U16 R16_2;                	//16位备用     0
	U16	R16_3;           		//16位备用     1  
    U16 R16_4;                	//16位备用     0
	U16	R16_5;           		//16位备用     1  
    U16 R16_6;                	//16位备用   16  0            
    
	U8	Printer;       			//实时打印     bit0:全部bit1:火警bit2:联动bit3:故障bit4:其他   
	U8	AutoControl;            //自动控制     
	U8	ManulControl;           //手动控制
	U8  SoundControl;           //联动输出声光是否受自动影响
    	
	U8	CRTConnect;          	//CRT通讯，对应火警传输 bit3      bit2 1屏蔽 0正常    bit1    bit0
	U8	CRTMode;          		//CRT模式		   

    U8  IP_Mode;                //IP模式      0
    U8  IP_Reserve;             //IP保留      0
    
	U8  SoundStatus;            //声光标志 BIT0,0-不存在，1-存在；BIT1,1-屏蔽，0-正常；
	U8  BroadSoundSwitch;		//广播声光切换允许
	U8  BroadPanelAddess;		//广播盘地址
	U8  BroadTimer;				//广播时间
	U8  SoundTimer;				//声光时间
	U8	BroadTrigger;			//几个火警触发广播取值范围1~5
	U8	BroadAutoLimit;			//广播是否受自动状态限制0:不受限制1:受限制
	U8	BuildingPosition;		//楼号位置对照表设置0:不以楼号位置对照表的方式显示1:以楼号位置对照表的方式显示
    U8  Reserve2[176];          //保留       
}SYSTEM_CONFIG;









#endif

