#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT7;
	P1DIR |= BIT6;

	int i;
	int j;

	while(1)
	{
	    if(i > 15000)
	    {
	        P1OUT ^= BIT7;
	        i = 0;
	    }
	    if(j > 25000)
	    {
	        P1OUT ^= BIT6;
	        j=0;
	    }

	    i++;
	    j++;
	}

	return 0;
}
