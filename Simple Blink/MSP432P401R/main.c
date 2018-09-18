/*
* Author: Kevin O'Hare
* Email: oharek8@students.rowan.edu
*/

#include "msp.h"

#define BIT0 0x01


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0; //Set pin 1.0 to Output

	int i; //Counter variable used in delay for loop

	while(1)
	{
	    P1OUT ^= BIT0;//Toggle LED on or off after each delay

	    for(i = 0; i < 100000; i++); //For loop is used to delay next toggle
	}


	return 0;
}
