#ifndef KEY$TIPS_H
#define KEY$TIPS_H

#define osObjectsPublic                     // define objects in main module

#include "stm32f10x.h"
#include "stdint.h"
#include "osObjects.h"                      // RTOS object definitions
#include "Driver_USART.h"

#define KEY_DEBUG		1		//�Ƿ����������ԣ�����1����������Ϣ��

#define K1	GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_5)		//����1���
#define K2	GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_6)		//����2���

#define KEY_TICK						30			 // �������� / ms

#define KEY_COMFIRM					2			 // �����������������ȷ��ʱ�� / ms*KEY_TICK

#define KEY_LONG_PERIOD				100		 // ����ʱ������ / ms*KEY_TICK ������8λ ���ֵ254
#define KEY_KEEP_PERIOD				20			 // �������ּ�� / ms*KEY_TICK
#define KEY_CONTINUE_PERIOD		50		*1000000		// ������� / us

#define KEY_VALUE_1	0x0010		//������ֵ1
#define KEY_VALUE_2	0x0020		//������ֵ2

#define KEY_DOWN		0x1000		//����״̬������
#define KEY_CONTINUE	0x2000		//����״̬����������
#define KEY_LONG		0x3000		//����״̬����������
#define KEY_KEEP		0x4000		//����״̬�����������󱣳�
#define KEY_UP			0x5000		//����״̬����������
#define KEY_NULL		0x6000		//����״̬���ް����¼�

#define KEY_STATE_INIT		0x0100	//���״̬��״̬����ʼ��
#define KEY_STATE_WOBBLE	0x0200	//���״̬��״̬���������
#define KEY_STATE_PRESS		0x0300	//���״̬��״̬�������̰����
#define KEY_STATE_CONTINUE	0x0400	//���״̬��״̬�������������	���ϣ���KEY_STATE_RECORD���
#define KEY_STATE_LONG		0x0500	//���״̬��״̬�������������
#define KEY_STATE_KEEP		0x0600	//���״̬��״̬�����������󱣳ּ��
#define KEY_STATE_RELEASE	0x0700	//���״̬��״̬�������ͷż��

#define KEY_STATE_RECORD	0x0800	//���״̬��״̬��������¼������ȷ�ϼ��

void keyInit(void);
void keyTest_Thread(const void *argument);
void keyTest(void);

#endif