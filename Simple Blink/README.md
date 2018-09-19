# Assignment
The assignment was to configure two of our MSP boards to blink one of their LEDs at a 50% duty cycle.

# Summary of Code
There are two main.c's, one for each board used in this portion of the lab. IN both cases however, the functionality is the same. After setting up the port pins to be outputs, they are turned on or off after every delay. In the case of the MSP430G2553, the LED toggling is delayed with a delay function. When it comes time to toggle, the LED will turn off if it was on, or on if it was off. It stays i this state until the next toggle. The same applies for the MSP432P401r, however since the delat function does not work for this board, an empty for loop was used as a delay instead.

# Troubleshooting
If you find that the code is not working there are a few things you should check. First make sure you are using the right board. Not all MSP chips have the same pinouts, so a pin thats tied to an LED on one board may not be tied to an LED on another board. Also, if you are using CCS to program the board, make sure you have the proper connections settings in the project properties.
