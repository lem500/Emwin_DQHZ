//本文件定义了GK702的通讯参数

#ifndef _COMMUNICATION_H_
#define _COMMUNICATION_H_

//定义通讯状态，适用于CAN和UART
#define COM_STATUS_IDLE		        0		//未发送
#define COM_STATUS_SENDING		    1		//帧发送
#define COM_STATUS_WAIT_SEND	    2		//等待发送剩余帧
#define COM_STATUS_WAIT_ANSWER	    3		//等待接收
#define COM_STATUS_RECEIVING	    4		//正接收
#define COM_STATUS_RECEIVED	        5		//接收完成
#define COM_STATUS_OVERTIME         6       //通讯超时
#define COM_STATUS_FAULT            7       //通讯故障
#define COM_STATUS_RIGHT            8 		//通讯恢复

//CAN通讯优先级定义；V1.0    2015-8-3 16:18:06
//事件类型和优先级定义，包括CAN通讯发送的命令；事件类型决定事件处理的优先级，数字越低优先级越高。
//共16个优先级
//2016/2/19 13:07:46 启动、反馈、监管合并；增加巡检应答，定义其优先级最低
//2016/2/23 8:41:32  定义最高优先级，应答等使用最高优先级

#define T_PRIORITY_HIGHEST			    0 		//最高优先级，确认用此优先级
#define T_PRIORITY_RESERVE_2			1 		//
#define T_PRIORITY_RESERVE_3			2 		//
#define T_PRIORITY_TRANSFER_PAUSE	    3 		//传输暂停：接收方缓冲区已满80%，发送方暂停发送，等待继续发送命令
#define T_PRIORITY_PACKAGE_CONTINUE	    4 		//连续数据包：一组数据需要分包传送
#define T_PRIORITY_TRANSFER_CONTINUE	5 		//传输继续
#define T_PRIORITY_BROADCAST_CMD		6 		//广播命令：复位、消音等
#define T_PRIORITY_RESERVE_4			7 		//
#define T_PRIORITY_RESERVE_5			8 		//
#define T_PRIORITY_ALARM_EVENT		    9 		//报警事件
#define T_PRIORITY_ACT_CMD			    10		//启动命令
#define T_PRIORITY_ACT_FEEDBACK_EVENT   11		//启动、反馈事件、监管事件
#define T_PRIORITY_FAULT_EVENT    	    12		//故障事件
#define T_PRIORITY_OTHERS_EVENT		    13		//其他事件
#define T_PRIORITY_RESERVE_6  		    14		//
#define T_PRIORITY_LOWEST        	    15		//最低优先级，巡检应答用此优先级


//通讯地址定义：V1.0    2015-10-14 14:07:41
//当火灾显示盘、电源盘采用回路总线通讯时不采用本编号
//2016/2/17 13:34:19；修改了回路卡、操作盘、联动盘地址：每种盘数量255，地址各独占一个字节
//2016/2/23 8:41:32  修改回路卡、联动盘、操作盘基址：01改为00
#define ID_BROADCAST			0		//广播地址
#define ID_MAIN_CONTROL			1		//主控地址
#define ID_KEYBOARD				2		//键盘板地址
#define ID_DATA_RECORD			3		//数据存储单元地址
#define ID_ETHERNET_BOARD		4		//以太网板地址
#define ID_DATA_PROGRAM         5   	//离线编程
#define ID_FIRE_PANEL			TBD1	//火灾显示盘基址，待定
#define ID_POWER_PANEL			TBD2	//电源盘基址，待定
#define ID_BROADCAST_PANEL		TBD3	//广播盘基址，待定
#define ID_TELEPHONE_PANEL		TBD4	//电话盘基址，待定
#define ID_LOOP_CARD			0x0100	//回路卡基址，数量128
//#define ID_         			0x0180	//扩展用
#define ID_OPERATION_PANLE		0x0200	//操作盘基址，数量255
#define ID_LINKAGE_PANEL		0x0300 	//联动盘基址，数量255


//通讯节点定义：V1.0    2015-10-14 14:07:41
//节点采用4位编码
#define NODE_GENERAL			0 	//通用
#define NODE_RESERVE_1			1 	//
#define NODE_RESERVE_2			2 	//
#define NODE_RESERVE_3			3 	//
#define NODE_RESERVE_4			4 	//
#define NODE_AFE				5 	//前端
#define NODE_LOOP_PANEL			6 	//回路卡、盘类
#define NODE_SLAVE_CONTROLLER	7 	//从机
#define NODE_MAIN_CONTROLLER	8 	//主机
#define NODE_CRT				9 	//图形显示系统
#define NODE_SERVER				10	//服务器
#define NODE_CLIENT				11	//客户端
#define NODE_RESERVE_13			12	//
#define NODE_RESERVE_14			13	//
#define NODE_RESERVE_15			14	//
#define NODE_RESERVE_16			15	//


#endif



