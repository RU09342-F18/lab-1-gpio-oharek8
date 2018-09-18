/*
* Author: Kevin O'Hare
* Email: oharek8@students.rowan.edu
*/

#include <msp430.h>
/*
 * main.c
 */
    int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0; //Set pin 1.0 to Output
	P4DIR |= BIT7; //Set pin 4.7 to Output


	int count1; //Counter variable used for first LED rate
	int count2; //Counter Variable used for second LED rate

	while(1)
	{
	    if(count1 > 20000) 
	    {
	        P1OUT ^= BIT0; //Toggles LED when count exceeds 20000

	        count1 = 0; //Resets count to 0
	    }
	    if(count2 > 10000)
	    {
	        P4OUT ^= BIT7; //Toggles LED when count exceeds 10000

	        count2 = 0; //Resets count to 0
	    }


	    count1++; //Increases count
	    count2++; //Increases count
	}



	return 0;
}
