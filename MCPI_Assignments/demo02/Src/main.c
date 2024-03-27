
#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "led.h"





int main(void)
{
	SystemInit();
	DelayMs(1);
	LedInit(LED_GREEN);
	LedInit(LED_ORANGE);
	LedInit(LED_RED);
	LedInit(LED_BLUE);
	while(1) {
		LedBlink(LED_GREEN, 200);
		LedBlink(LED_ORANGE, 200);
		LedBlink(LED_RED, 200);
		LedBlink(LED_BLUE, 200);
	}
	return 0;
}


