# Assignment
The assignment this time was to use a button as an input.

# Summary of Code
In both versions of the code, the LED turn on if the button is pressed and off when it is released. This is done by performing a
button check within a while loop. When the button is pressed the input pin is tied to ground and its value becomes 0. When this 
is realized by the code it turns the LED on. Otherwise, the LED remains off.

# Troubleshooting
If you find that the code is not working there are a few things you should check. First make sure you are using the right board. Not all MSP chips have the same pinouts, so a pin thats tied to an LED on one board may not be tied to an LED on another board. Also, if you are using CCS to program the board, make sure you have the proper connections settings in the project properties.
