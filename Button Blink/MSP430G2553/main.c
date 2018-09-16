#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0; //Set pin 1.0 to output
	P1DIR &= ~BIT3;//Set pin 1.3 to input


	 while(1)
	 {
	     if((P1IN & BIT3) == 0) //Is button pushed?
	          {
	             P1OUT |= BIT0; //Turn LED on if yes
	          }
	     else
	          {
	             P1OUT &= ~BIT0; //Turn LED Off if no
	          }
	 }
	return 0;
}
