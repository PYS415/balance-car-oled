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
	huidu_Init5();
	huidu_Init6();
	huidu_Init7();
	huidu_Init8();

	//电机//
	Motor_Init1();
	Motor_Init2();
	Motor_Init3();
	Motor_Init4();

	while (1)
	{
		//灰度采样//
		OLED_ShowString(1, 1, "1:");
		OLED_ShowNum(1, 3, huidu_Read1(), 5);
		OLED_ShowString(1, 8, " 5:");
		OLED_ShowNum(1, 11, huidu_Read5(), 5);
		OLED_ShowString(2, 1, "2:");
		OLED_ShowNum(2, 3, huidu_Read2(), 5);
		OLED_ShowString(2, 8, " 6:");
		OLED_ShowNum(2, 11, huidu_Read6(), 5);
		OLED_ShowString(3, 1, "3:");
		OLED_ShowNum(3, 3, huidu_Read3(), 5);
		OLED_ShowString(3, 8, " 7:");
		OLED_ShowNum(3, 11, huidu_Read7(), 5);
		OLED_ShowString(4, 1, "4:");
		OLED_ShowNum(4, 3, huidu_Read4(), 5);
		OLED_ShowString(4, 8, " 8:");
		OLED_ShowNum(4, 11, huidu_Read8(), 5);

		//电机控制//
		Motor_SetSpeed1(50);
		Motor_SetSpeed2(50);
		Motor_SetSpeed3(50);
		Motor_SetSpeed4(50);

	}
}
