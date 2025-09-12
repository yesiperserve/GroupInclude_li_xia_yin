#include "comm.h"
#include "alldata.h"
#include "usart.h"

/* ANOTC����վͨѶ���ƣ����ڰ汾�� */
void Send_ANOTC()
{
	uint8_t i;
	uint8_t len=0;							
	int16_t Anto[12];
	int8_t *pt = (int8_t*)(Anto);		
	
	Anto[2] = (int16_t)(Angle.roll*100);
	Anto[3] = (int16_t)(Angle.pitch*100);
	Anto[4] = -(int16_t)(Angle.yaw*100);
	Anto[5] = 0;//û�и߶�����
	Anto[6] = 0;
	Anto[7] = ALL_flag.unlock<<8;//������Ϣ
	len = 12;						//���ݳ���
	
	Anto[0] = 0XAAAA;
	Anto[1] = len | 0x01<<8;
	pt[len+4] = (int8_t)(0xAA+0xAA);
	
	pt[len+4] = (int8_t)(0xAA+0xAA);
	for(i=2;i<len+4;i+=2)    //a swap with b;
	{
		pt[i] ^= pt[i+1];
		pt[i+1] ^= pt[i];
		pt[i] ^= pt[i+1];
		pt[len+4] += pt[i] + pt[i+1];
	}
	
//	USART1_SendByte(pt,len+5);//���ô��ڷ��͵�������λ��
	HAL_UART_Transmit(&huart1,pt,len+5,0xFFFF);
}