#include <msp430.h> 

#define BIT0 0x01;
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0;
	P1SEL &= ~BIT0;
	P1SEL2 &= ~BIT0;

	while(1)
	{
	    P1OUT ^= BIT0;

	    __delay_cycles(200000);
	}

	return 0;
}
