/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */  

/* Includes ------------------------------------------------------------------*/
//USE_STDPERIPH_DRIVER, STM32F10X_HD, USE_STM3210B_EVAL

/***头文件引用****/
#include "main.h"


/**
  * @brief  使用esp8266模块和EDP协议向ONENET平台发送开发板四个LED指示灯的实时状态，并通过平台或者开发板按键控制LED。
**/


int main(void)
{	
	

	char test[50]={0xFE, 0x0D, 0x01, 0x64, 0x6A, 0x6A, ';', 'T',':',0x33 , ';', 'C',':','0','\r','\n'};
		//SystemInit();
		LED_Init();    //LED指示灯初始化函数
		USART1_Init(); //USART1串口初始化函数
		USART2_Init(); //USART2串口初始化函数
	
		while(1)
		{	
      mDelay(200);
      usart1_write(USART1,test,strlen(test));
		}	
}

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
