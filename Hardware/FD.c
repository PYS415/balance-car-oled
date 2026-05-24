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
    uint32_t track_value1 = 0;  // 存储加权求和后的结果
    // 定义每一路对应的权重（按顺序：第1路×1、第2路×10、第3路×100...第7路×1000000）
    uint32_t weight1[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // 逐路读取电平，乘以对应权重后累加
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_11) ? 1 : 0) * weight1[0];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_10) ? 1 : 0) * weight1[1];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_9) ? 1 : 0) * weight1[2];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_8) ? 1 : 0) * weight1[3];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_7) ? 1 : 0) * weight1[4];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_6) ? 1 : 0) * weight1[5];
    track_value1 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_5) ? 1 : 0) * weight1[6];
    
    return track_value1;  // 返回加权和
}



       //huidu_Init2//
uint32_t huidu_Read2(void)
{
    uint32_t track_value2 = 0;  // 存储加权求和后的结果
    // 定义每一路对应的权重（按顺序：第1路×1、第2路×10、第3路×100...第7路×1000000）
    uint32_t weight2[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // 逐路读取电平，乘以对应权重后累加
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_15) ? 1 : 0) * weight2[0];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_14) ? 1 : 0) * weight2[1];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_13) ? 1 : 0) * weight2[2];
    track_value2 += (GPIO_ReadInputDataBit(GPIOG, GPIO_Pin_12) ? 1 : 0) * weight2[3];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_15) ? 1 : 0) * weight2[4];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_14) ? 1 : 0) * weight2[5];
    track_value2 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_13) ? 1 : 0) * weight2[6];
    
    return track_value2;  // 返回加权和
}

       //huidu_Init3//
uint32_t huidu_Read3(void)
{
    uint32_t track_value3 = 0;  // 存储加权求和后的结果
    // 定义每一路对应的权重（按顺序：第1路×1、第2路×10、第3路×100...第7路×1000000）
    uint32_t weight3[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // 逐路读取电平，乘以对应权重后累加
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_11) ? 1 : 0) * weight3[0];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_10) ? 1 : 0) * weight3[1];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_9) ? 1 : 0) * weight3[2];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_8) ? 1 : 0) * weight3[3];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_7) ? 1 : 0) * weight3[4];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_6) ? 1 : 0) * weight3[5];
    track_value3 += (GPIO_ReadInputDataBit(GPIOF, GPIO_Pin_5) ? 1 : 0) * weight3[6];
    
    return track_value3;  // 返回加权和
}

       //huidu_Init4//
uint32_t huidu_Read4(void)
{
    uint32_t track_value4 = 0;  // 存储加权求和后的结果
    // 定义每一路对应的权重（按顺序：第1路×1、第2路×10、第3路×100...第7路×1000000）
    uint32_t weight4[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
    
    // 逐路读取电平，乘以对应权重后累加
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_6) ? 1 : 0) * weight4[0];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_5) ? 1 : 0) * weight4[1];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_4) ? 1 : 0) * weight4[2];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_3) ? 1 : 0) * weight4[3];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_2) ? 1 : 0) * weight4[4];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_1) ? 1 : 0) * weight4[5];
    track_value4 += (GPIO_ReadInputDataBit(GPIOE, GPIO_Pin_0) ? 1 : 0) * weight4[6];
    
    return track_value4;  // 返回加权和
}

