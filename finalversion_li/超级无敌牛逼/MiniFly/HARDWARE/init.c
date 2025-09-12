#include "init.h"
#include "alldata.h"

volatile uint32_t SysTick_count; //ϵͳʱ�����
_st_Mpu MPU6050;   //MPU6050ԭʼ����
_st_AngE Angle;    //��ǰ�Ƕ���ֵ̬
_st_Remote Remote; //ң��ͨ��ֵ

_st_ALL_flag ALL_flag; //ϵͳ��־λ������������־λ��

PidObject pidRateX; //�ڻ�PID����
PidObject pidRateY;
PidObject pidRateZ;

PidObject pidPitch; //�⻷PID����
PidObject pidRoll;
PidObject pidYaw;

//void pid_param_Init(void); //PID���Ʋ�����ʼ������дPID�����ᱣ�����ݣ��������ɺ�ֱ���ڳ�������� ����¼���ɿ�

int16_t motor_PWM_Value[4];//

void ALL_Init(void)
{
//	USB_HID_Init();   		//USB��λ����ʼ��
//	
//	IIC_Init();             //I2C��ʼ��
//	
//	pid_param_Init();       //PID������ʼ��
//	
//	
//	MpuInit();              //MPU6050��ʼ��
////----------------------------------------	
//// ˮƽ��ֹ�궨���ù���ֻ��Ҫ����һ�Σ���Ҫÿ�ν��С���ҷ���ǰ�Ѿ�����һ�α궨�ˣ��궨�����Զ����浽MCU��FLASH�С�
//// ����У׼�����´򿪼��ɣ���ʱ5S��Ϊ�˲��ϵ�غ��г����ʱ�佫���������ڵ��Ͻ���ˮƽ��ֹ�궨��
////	delay_ms(5000);MpuGetOffset();
////----------------------------------------		
////	USART1_Config();  //���ô���     

//	
//	NRF24L01_init();				//2.4Gң��ͨ�ų�ʼ��
//	
//	TIM2_PWM_Config();			//4·PWM��ʼ��
//	TIM3_PWM_Config();      //LED PWM��ʼ��
//	
//	
//	
//	TIM1_Config();					//ϵͳ�������ڳ�ʼ�� 
	
}


////PID�ڴ˴��޸�
//void pid_param_Init(void)//PID������ʼ��
//{
//	pidRateX.kp = 4.0f;
//	pidRateY.kp = 4.0f;
//	pidRateZ.kp = 8.0f;
//	
//	pidRateX.ki = 0.02f;
//	pidRateY.ki = 0.02f;
//	pidRateZ.ki = 0.0f;	
//	
//	pidRateX.kd = 0.28f;
//	pidRateY.kd = 0.28f;
//	pidRateZ.kd = 0.4f;	
//	
//	pidPitch.kp = 6.0f;
//	pidRoll.kp = 6.0f;
//	pidYaw.kp = 6.0f;	


//}


////PID�ڴ˴��޸�
//void pid_param_Init(void)//PID������ʼ��
//{
//	pidRateX.kp = 3.f;
//	pidRateY.kp = 3.f;
//	pidRateZ.kp = 6.0f;
//	
//	pidRateX.ki = 0.05f;
//	pidRateY.ki = 0.05f;
//	pidRateZ.ki = 0.02f;	
//	
//	pidRateX.kd = 0.3f;
//	pidRateY.kd = 0.3f;
//	pidRateZ.kd = 0.3f;	
//	
//	pidPitch.kp = 10.0f;
//	pidRoll.kp = 10.0f;
//	pidYaw.kp = 8.0f;	


//}
//PID�ڴ˴��޸�
void pid_param_Init(void)//PID������ʼ��
{
	pidRateX.kp = 3.f;
	pidRateY.kp = 3.f;
	pidRateZ.kp = 8.0f;
	
	pidRateX.kd = 0.20f;
	pidRateY.kd = 0.20f;
	pidRateZ.kd = 0.4f;	
	
	pidPitch.kp = 8.0f;
	pidRoll.kp = 8.0f;
	pidYaw.kp = 6.0f;	
	
	
//	pidPitch.ki = 0.01f;
//	pidRoll.ki = 0.01f;


}