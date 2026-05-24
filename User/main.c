#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Motor.h"
#include "Key.h"
#include "PWM.h"
#include "FD.h"

uint8_t KeyNum;
int8_t Speed;

int main(void)
{
	//灰度//
	OLED_Init();
	huidu_Init1();
	huidu_Init2();
	huidu_Init3();
	huidu_Init4();
	
	//电机//
	Motor_Init1();
	Motor_Init2();
	Motor_Init3();
	Motor_Init4();

	while (1)
	{
		//灰度测试//
		OLED_ShowString(1, 1, "hd1:");
		OLED_ShowString(2, 1, "hd2:");
		OLED_ShowString(3, 1, "hd3:");
		OLED_ShowString(4, 1, "hd4:");
		
		OLED_ShowSignedNum(1, 4, huidu_Read1(), 7);//灰度1识别值
		OLED_ShowSignedNum(2, 4, huidu_Read2(), 7);//灰度2识别值
		OLED_ShowSignedNum(3, 4, huidu_Read3(), 7);//灰度3识别值
		OLED_ShowSignedNum(4, 4, huidu_Read4(), 7);//灰度4识别值

		//电机测试//
		Motor_SetSpeed1(50);
		Motor_SetSpeed2(50);
		Motor_SetSpeed3(50);
		Motor_SetSpeed4(50);
		
	}
}
