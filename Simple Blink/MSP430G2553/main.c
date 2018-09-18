#include <msp430.h> 

#define BIT0 0x01;
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0; //Set pin 1.0 to Output
	//P1SEL &= ~BIT0;//
	//P1SEL2 &= ~BIT0;

	while(1)
	{
	    P1OUT ^= BIT0;//Toggle LED on and off after each delay

	    __delay_cycles(200000);//Delays next toggle
	}

	return 0;
}
