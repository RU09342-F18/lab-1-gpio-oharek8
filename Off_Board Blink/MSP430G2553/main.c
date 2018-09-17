#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT7;

	int i;

	while(1)
	{
	    P1OUT ^= BIT7;


	    for(i = 0; i < 20000; i++);
	}

	return 0;
}
