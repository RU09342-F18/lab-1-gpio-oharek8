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
	
	P1DIR |= BIT0;
	P4DIR |= BIT7;


	int count1;
	int count2;

	while(1)
	{
	    if(count1 > 20000)
	    {
	        P1OUT ^= BIT0;

	        count1 = 0;
	    }
	    if(count2 > 10000)
	    {
	        P4OUT ^= BIT7;

	        count2 = 0;
	    }


	    count1++;
	    count2++;
	}



	return 0;
}
