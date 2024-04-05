

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "timer.h"



int main(void)
{
	SystemInit();
	TimerInit();
	while(1);
	return 0;
}
