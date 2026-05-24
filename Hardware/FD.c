#include "stm32f10x.h"                  // Device header


          //FD1//
void huidu_Init1(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, ENABLE);		
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOG, &GPIO_InitStructure);	
	
	
}

          //FD2//
void huidu_Init2(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, ENABLE);		
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOG, &GPIO_InitStructure);	
	
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
	GPIO_Init(GPIOF, &GPIO_InitStructure);
	
}

          //FD3//
void huidu_Init3(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);		
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOF, &GPIO_InitStructure);	
	
}

          //FD4//
void huidu_Init4(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);		
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOE, &GPIO_InitStructure);	

}


       //huidu_Init1//
uint32_t huidu_Read1(void)
{
    uint32_t track_value1 = 0;  // �洢��Ȩ��ͺ�Ľ��
    // ����ÿһ·��Ӧ��Ȩ�أ���˳�򣺵�1·��1����2·��10����3·��100...��7·��1000000��
    uint32_t weight1[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // ��·��ȡ��ƽ�����Զ�ӦȨ�غ��ۼ�
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_11) ? 1 : 0) * weight1[0];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_10) ? 1 : 0) * weight1[1];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_9) ? 1 : 0) * weight1[2];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_8) ? 1 : 0) * weight1[3];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_7) ? 1 : 0) * weight1[4];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_6) ? 1 : 0) * weight1[5];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_5) ? 1 : 0) * weight1[6];
    
    return track_value1;  // ���ؼ�Ȩ��
}



       //huidu_Init2//
uint32_t huidu_Read2(void)
{
    uint32_t track_value2 = 0;  // �洢��Ȩ��ͺ�Ľ��
    // ����ÿһ·��Ӧ��Ȩ�أ���˳�򣺵�1·��1����2·��10����3·��100...��7·��1000000��
    uint32_t weight2[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // ��·��ȡ��ƽ�����Զ�ӦȨ�غ��ۼ�
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_15) ? 1 : 0) * weight2[0];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_14) ? 1 : 0) * weight2[1];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_13) ? 1 : 0) * weight2[2];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_12) ? 1 : 0) * weight2[3];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_15) ? 1 : 0) * weight2[4];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_14) ? 1 : 0) * weight2[5];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_13) ? 1 : 0) * weight2[6];
    
    return track_value2;  // ���ؼ�Ȩ��
}

       //huidu_Init3//
uint32_t huidu_Read3(void)
{
    uint32_t track_value3 = 0;  // �洢��Ȩ��ͺ�Ľ��
    // ����ÿһ·��Ӧ��Ȩ�أ���˳�򣺵�1·��1����2·��10����3·��100...��7·��1000000��
    uint32_t weight3[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // ��·��ȡ��ƽ�����Զ�ӦȨ�غ��ۼ�
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_11) ? 1 : 0) * weight3[0];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_10) ? 1 : 0) * weight3[1];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_9) ? 1 : 0) * weight3[2];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_8) ? 1 : 0) * weight3[3];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_7) ? 1 : 0) * weight3[4];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_6) ? 1 : 0) * weight3[5];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_5) ? 1 : 0) * weight3[6];
    
    return track_value3;  // ���ؼ�Ȩ��
}

       //huidu_Init4//
uint32_t huidu_Read4(void)
{
    uint32_t track_value4 = 0;  // �洢��Ȩ��ͺ�Ľ��
    // ����ÿһ·��Ӧ��Ȩ�أ���˳�򣺵�1·��1����2·��10����3·��100...��7·��1000000��
    uint32_t weight4[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

    // ��·��ȡ��ƽ�����Զ�ӦȨ�غ��ۼ�
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_6) ? 1 : 0) * weight4[0];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_5) ? 1 : 0) * weight4[1];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_4) ? 1 : 0) * weight4[2];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_3) ? 1 : 0) * weight4[3];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_2) ? 1 : 0) * weight4[4];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_1) ? 1 : 0) * weight4[5];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_0) ? 1 : 0) * weight4[6];

    return track_value4;  // ���ؼ�Ȩ��
}

          //FD5//
void huidu_Init5(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}

          //FD6//
void huidu_Init6(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_12 | GPIO_Pin_13;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &GPIO_InitStructure);
}

          //FD7//
void huidu_Init7(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_9 | GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
}

          //FD8//
void huidu_Init8(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_3 | GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
}

       //huidu_Read5//
uint32_t huidu_Read5(void)
{
    uint32_t track_value5 = 0;
    uint32_t weight5[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_6) ? 1 : 0) * weight5[0];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_5) ? 1 : 0) * weight5[1];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_4) ? 1 : 0) * weight5[2];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_3) ? 1 : 0) * weight5[3];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_2) ? 1 : 0) * weight5[4];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_1) ? 1 : 0) * weight5[5];
    track_value5 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_0) ? 1 : 0) * weight5[6];

    return track_value5;
}

       //huidu_Read6//
uint32_t huidu_Read6(void)
{
    uint32_t track_value6 = 0;
    uint32_t weight6[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_13) ? 1 : 0) * weight6[0];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_12) ? 1 : 0) * weight6[1];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_11) ? 1 : 0) * weight6[2];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_10) ? 1 : 0) * weight6[3];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_9) ? 1 : 0) * weight6[4];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_8) ? 1 : 0) * weight6[5];
    track_value6 += (GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_7) ? 1 : 0) * weight6[6];

    return track_value6;
}

       //huidu_Read7//
uint32_t huidu_Read7(void)
{
    uint32_t track_value7 = 0;
    uint32_t weight7[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_7) ? 1 : 0) * weight7[0];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_6) ? 1 : 0) * weight7[1];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_5) ? 1 : 0) * weight7[2];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_4) ? 1 : 0) * weight7[3];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_3) ? 1 : 0) * weight7[4];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_10) ? 1 : 0) * weight7[5];
    track_value7 += (GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_9) ? 1 : 0) * weight7[6];

    return track_value7;
}

       //huidu_Read8//
uint32_t huidu_Read8(void)
{
    uint32_t track_value8 = 0;
    uint32_t weight8[] = {1, 10, 100, 1000, 10000, 100000, 1000000};

    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_15) ? 1 : 0) * weight8[0];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_14) ? 1 : 0) * weight8[1];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_13) ? 1 : 0) * weight8[2];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_12) ? 1 : 0) * weight8[3];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_3) ? 1 : 0) * weight8[4];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_1) ? 1 : 0) * weight8[5];
    track_value8 += (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_0) ? 1 : 0) * weight8[6];

    return track_value8;
}

