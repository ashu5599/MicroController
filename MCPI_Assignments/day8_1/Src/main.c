
#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "eeprom.h"
#include "i2c.h"
#include "uart.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	char str[32] = "";
	char sr[32] = "";
		char str1[32];
		//char str2[32];
		SystemInit();
		UartInit(BAUD_9600);
		EEPROM_Init();

	uint8_t choice = 0 ;
	while(1)
		{


			UartPuts("Enter your choice \r\n1. write into eeporm\r\n2.read from eemprom\r\n");
			choice= UartGetch();
	        switch(choice)
	        {
	           case '1':
	        	   UartPuts("Enter Strings...\r\n");
	        	  UartGets(str1);

	        	   EEPROM_Write(0x0020, (uint8_t*)str1, 16);

	        	     break;
	           case '2':
	        	   EEPROM_Read(0x0020, (uint8_t*)sr, 16);
	        	   UartPuts(sr);

	        	     break;
	        }
	        choice = 0;
		}


//	EEPROM_Write(0x0020, (uint8_t*)"GOD BLESS YOU!\r\n", 16);
//	EEPROM_Read(0x0020, (uint8_t*)str, 16);
	while(1);
	return 0;
}









