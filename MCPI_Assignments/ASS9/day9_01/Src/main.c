

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "i2c.h"
#include "i2c_lcd.h"
#include "spi.h"
#include "lis3dsh.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
   char str[100];
   int ret;
   LIS_Data val;
   SystemInit();
   LIS_Init();

   DelayMs(1000);
     ret = LcdInit();
     while(1){
    	 if(ret){
    		 val = LIS_GetData();
    		 sprintf(str, "X=%d, Y=%d\r", val.x, val.y);
    		 LcdPuts(LCD_LINE1, str);
    		 sprintf(str, "Z=%d", val.z);
    		 LcdPuts(LCD_LINE2, str);
    		 DelayMs(500);

     	 }
     }
}







