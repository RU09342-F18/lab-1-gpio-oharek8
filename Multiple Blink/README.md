# Assignment
The assignment for this portion of the lab was to make two of the development board's LEDs blink at different rates.

# Summary of Code
This code is similar to the simple blink, but differnt in the fact that we are blink two lights independently. This is done through the use of two counters, one for each LED. When the counter exceeds a limit, say 25000, the LED will toggle and the counter will reset to 0. By using two different counters and two different counter limits, we can blink two separte LEDs at two different rates. If you would like to change the rate the LEDs blink at, simply increase or decrease the counter limit as desired.

# Troubleshooting
If you find that the code is not working there are a few things you should check. First make sure you are using the right board. Not all MSP chips have the same pinouts, so a pin thats tied to an LED on one board may not be tied to an LED on another board. Also, if you are using CCS to program the board, make sure you have the proper connections settings in the project properties.

Also, you may find that the LED either stays on and does not blink or doesn't turn on at all. This may be because you set the counter limit either too high or low.
