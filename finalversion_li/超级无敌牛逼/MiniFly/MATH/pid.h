#ifndef __PID_H
#define __PID_H

//PID�����ṹ��
typedef struct{
	float desired;			//����ֵ
	float kp;           //����ϵ��
	float ki;           //����ϵ��
	float kd;           //΢��ϵ��
}PID;
extern PID pid;



#endif