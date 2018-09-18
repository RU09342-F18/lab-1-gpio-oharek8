/*
* Author: Kevin O'Hare
* Email: oharek8@students.rowan.edu
*/

#include <msp430.h>
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT

    P1DIR |= BIT0; // Set pin 1.0 to Output
    P1DIR |= BIT6; //Set pin 1.6 to Output

    int i; //counter variable used for first LED
    int j; //counter variable used for second LED
    while(1)
    {
        if(i>5000)
        {
            P1OUT ^= BIT0; //Toggle LED
            i=0; //Reset counter to 0 after it reaches 5000
        }
       if(j>15000)
       {
           P1OUT ^= BIT6; // Toggle LED
           j=0; //Reset counter to 0 after it reaches 15000
       }

        i++; //Increase counter by one
        j++; //Increase counter by one
    }
}
