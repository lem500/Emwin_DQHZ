//���ļ�������GK702��ͨѶ����

#ifndef _COMMUNICATION_H_
#define _COMMUNICATION_H_

//����ͨѶ״̬��������CAN��UART
#define COM_STATUS_IDLE		        0		//δ����
#define COM_STATUS_SENDING		    1		//֡����
#define COM_STATUS_WAIT_SEND	    2		//�ȴ�����ʣ��֡
#define COM_STATUS_WAIT_ANSWER	    3		//�ȴ�����
#define COM_STATUS_RECEIVING	    4		//������
#define COM_STATUS_RECEIVED	        5		//�������
#define COM_STATUS_OVERTIME         6       //ͨѶ��ʱ
#define COM_STATUS_FAULT            7       //ͨѶ����
#define COM_STATUS_RIGHT            8 		//ͨѶ�ָ�

//CANͨѶ���ȼ����壻V1.0    2015-8-3 16:18:06
//�¼����ͺ����ȼ����壬����CANͨѶ���͵�����¼����;����¼���������ȼ�������Խ�����ȼ�Խ�ߡ�
//��16�����ȼ�
//2016/2/19 13:07:46 ��������������ܺϲ�������Ѳ��Ӧ�𣬶��������ȼ����
//2016/2/23 8:41:32  ����������ȼ���Ӧ���ʹ��������ȼ�

#define T_PRIORITY_HIGHEST			    0 		//������ȼ���ȷ���ô����ȼ�
#define T_PRIORITY_RESERVE_2			1 		//
#define T_PRIORITY_RESERVE_3			2 		//
#define T_PRIORITY_TRANSFER_PAUSE	    3 		//������ͣ�����շ�����������80%�����ͷ���ͣ���ͣ��ȴ�������������
#define T_PRIORITY_PACKAGE_CONTINUE	    4 		//�������ݰ���һ��������Ҫ�ְ�����
#define T_PRIORITY_TRANSFER_CONTINUE	5 		//�������
#define T_PRIORITY_BROADCAST_CMD		6 		//�㲥�����λ��������
#define T_PRIORITY_RESERVE_4			7 		//
#define T_PRIORITY_RESERVE_5			8 		//
#define T_PRIORITY_ALARM_EVENT		    9 		//�����¼�
#define T_PRIORITY_ACT_CMD			    10		//��������
#define T_PRIORITY_ACT_FEEDBACK_EVENT   11		//�����������¼�������¼�
#define T_PRIORITY_FAULT_EVENT    	    12		//�����¼�
#define T_PRIORITY_OTHERS_EVENT		    13		//�����¼�
#define T_PRIORITY_RESERVE_6  		    14		//
#define T_PRIORITY_LOWEST        	    15		//������ȼ���Ѳ��Ӧ���ô����ȼ�


//ͨѶ��ַ���壺V1.0    2015-10-14 14:07:41
//��������ʾ�̡���Դ�̲��û�·����ͨѶʱ�����ñ����
//2016/2/17 13:34:19���޸��˻�·���������̡������̵�ַ��ÿ��������255����ַ����ռһ���ֽ�
//2016/2/23 8:41:32  �޸Ļ�·���������̡������̻�ַ��01��Ϊ00
#define ID_BROADCAST			0		//�㲥��ַ
#define ID_MAIN_CONTROL			1		//���ص�ַ
#define ID_KEYBOARD				2		//���̰��ַ
#define ID_DATA_RECORD			3		//���ݴ洢��Ԫ��ַ
#define ID_ETHERNET_BOARD		4		//��̫�����ַ
#define ID_DATA_PROGRAM         5   	//���߱��
#define ID_FIRE_PANEL			TBD1	//������ʾ�̻�ַ������
#define ID_POWER_PANEL			TBD2	//��Դ�̻�ַ������
#define ID_BROADCAST_PANEL		TBD3	//�㲥�̻�ַ������
#define ID_TELEPHONE_PANEL		TBD4	//�绰�̻�ַ������
#define ID_LOOP_CARD			0x0100	//��·����ַ������128
//#define ID_         			0x0180	//��չ��
#define ID_OPERATION_PANLE		0x0200	//�����̻�ַ������255
#define ID_LINKAGE_PANEL		0x0300 	//�����̻�ַ������255


//ͨѶ�ڵ㶨�壺V1.0    2015-10-14 14:07:41
//�ڵ����4λ����
#define NODE_GENERAL			0 	//ͨ��
#define NODE_RESERVE_1			1 	//
#define NODE_RESERVE_2			2 	//
#define NODE_RESERVE_3			3 	//
#define NODE_RESERVE_4			4 	//
#define NODE_AFE				5 	//ǰ��
#define NODE_LOOP_PANEL			6 	//��·��������
#define NODE_SLAVE_CONTROLLER	7 	//�ӻ�
#define NODE_MAIN_CONTROLLER	8 	//����
#define NODE_CRT				9 	//ͼ����ʾϵͳ
#define NODE_SERVER				10	//������
#define NODE_CLIENT				11	//�ͻ���
#define NODE_RESERVE_13			12	//
#define NODE_RESERVE_14			13	//
#define NODE_RESERVE_15			14	//
#define NODE_RESERVE_16			15	//


#endif



