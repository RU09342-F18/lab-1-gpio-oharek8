#include "msp.h"

#define BIT0 0x01


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0;

	int i;

	while(1)
	{
	    P1OUT ^= BIT0;

	    for(i = 0; i < 100000; i++);
	}


	return 0;
}
