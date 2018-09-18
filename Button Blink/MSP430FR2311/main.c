/*
* Author: Kevin O'Hare
* Email: oharek8@students.rowan.edu
*/

/*
* Example code was used for the button check
* MSP430 Microcontroller Basics, by John Davies. Pg. 83
*/

#include <msp430.h> 

/*
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0; //Sets LED pin 1.0 to Output
	P1DIR &= ~BIT1; //Sets Switch pin 1.1 to Input
	P1REN |=  BIT1; //Enables pullup/pulldown resistors
	PM5CTL0 &= ~LOCKLPM5; //Unlocks GPIO pins

	while(1)
	{
	    if((P1IN & BIT1) == 0) //Is button pushed?
	    {
	        P1OUT |= BIT0; //Turn LED on if yes
	    }
	    else
	    {
	        P1OUT &= ~BIT0;//Turn LED off if no
	    }
	}



	return 0;
}