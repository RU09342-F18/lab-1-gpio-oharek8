#include <msp430.h> 

/**
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

/*int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    //Button I am using is port 1.1
    //LED I am using is port 1.0
    //P1SEL &= ~BIT1; //Set the button pin to I/O
    P1DIR &= ~BIT1; //Sets button as an input
    P1REN |=  BIT1; //Enables the pullup/down resistor
    P1OUT |=  BIT1; //Set the resistor to be a pullup resistor

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= BIT0; //sets the direction of pin 1 to output
    P1OUT &= ~BIT0; //sets output high
   // P2DIR |= BIT0; //sets the direction of pin 1 to output
    //P2OUT &= ~BIT0; //sets output high
    while(1)
    {
        switch(P1IN&BIT1)//checks when P1IN
        {
        case 0: //when button is not pressed
            //when
          // P2OUT ^= BIT0;
           P1OUT &= ~BIT0;
           // __delay_cycles(100000);
            break;
        case 2://when button is pressed
            //when and'ed together = 2 bc BIT1 = 2
            P1OUT |= BIT0;
           // P2OUT &= ~BIT0;
          // __delay_cycles(100000);
           break;
        default : //error checking
            P1OUT=BIT0;
           // P2OUT=BIT0;
            break;
        }
    }

} */
