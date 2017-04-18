#include "gpio.h"


void gpio_init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    //PB12 M0 and PB13 M1 
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11|GPIO_Pin_12;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	// ÍÆÍìÊä³ö_OUT_PP
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
	
}
