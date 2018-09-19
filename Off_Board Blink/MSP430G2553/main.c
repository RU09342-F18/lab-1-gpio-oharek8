#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT7; //Set pin 1.7 to Output
	P1DIR |= BIT6; //Set pin 1.6 to Output

	int i; //Counter Variable for pin 1.7 rate
	int j; //Counter Variable for pin 1.6 rate

	while(1)
	{
	    if(i > 15000)
	    {
	        P1OUT ^= BIT7; //Toggles LED after count exceeds 15000
	        i = 0; //Resets counter to 0
	    }
	    if(j > 25000)
	    {
	        P1OUT ^= BIT6; //Toggles LED after count exceeds 25000
	        j=0; //Resets counter to 0
	    }

	    i++; //Increase count
	    j++; //Increase count
	}

	return 0;
}
