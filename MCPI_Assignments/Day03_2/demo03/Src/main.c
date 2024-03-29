/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "lcd.h"


int main(void)
{
	SystemInit();
	LcdInit();
	LcdPuts(LCD_LINE1, "SUNBEAM SUNBEAM");
	LcdPuts(LCD_LINE2, "SUNBEAM");
	while(1){
		//LcdPuts(LCD_LINE1, " SUNBEAM");
			//LcdPuts(LCD_LINE2, "!");
		for(int i=0;i<16;i++){
	         LcdWrite(LCD_CMD,LCD_RIGHT_SHIFT);
		DelayMs(500);
		}
	}
	return 0;
}







