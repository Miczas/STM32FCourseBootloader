#include "Board_LED.h"
#include <stdint.h>

void delay(void)
{
	uint32_t i = 0;
	for (i = 0; i<5e5; i++);
}

int main (void)
{
	LED_Initialize();
	
	while(1)
	{
		LED_On(0);
		delay();
		LED_Off(0);
		delay();
	}
	
	return 0;
}