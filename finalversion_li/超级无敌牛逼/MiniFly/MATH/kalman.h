#ifndef __KALMAN_H
#define __KALMAN_H

//�������˲������ṹ��
struct KalmanFilter{
	float LastP;		//��һ��Э����
	float NewP;		//���µ�Э����
	float Out;			//���������
	float Kg;				//����������
	float Q;				//����������Э����
	float R;				//�۲�������Э����
};

extern void kalmanfiter(struct KalmanFilter *EKF,float input);		//һά�������˲�

#endif