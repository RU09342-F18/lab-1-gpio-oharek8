# Assignment
The assignment for this portion of the lab was to make two of the development board's LEDs blink at different rates.

# Summary of Code
This code is similar to the simple blink, but differnt in the fact that we are blink two lights independently. This is done through the use of two counters, one for each LED. When the counter exceeds a limit, say 25000, the LED will toggle and the counter will reset to 0. By using two different counters and two different counter limits, we can blink two separte LEDs at two different rates. If you would like to change the rate the LEDs blink at, simply increase or decrease the counter limit as desired.

# YOU NEED TO CREATE THE FOLLOWING FOLDERS
* MSP430G2553
* MSP(FILL IN WITH WHAT YOU ARE USING)

## README
Remember to replace this README with your README once you are ready to submit. I would recommend either making a copy of this file or taking a screen shot. There might be a copy of all of these README's in a folder on the top level depending on the exercise.

## Extra Work
When you take a look at the development boards, you are limited to what is built into the platform.

### Even More LEDs
Since up to this point you should have hopefully noticed that you are simply just controlling each pin on your processor. So... what is keeping you from putting an LED on each pin? Can you actually control the speed of each of these LEDs?

### Patterned Lights
If you can control a ton of LEDs, what is keeping you from having a little fun? Why not try and make something like a moving face or other moving object in lights. *CAUTION* I would only do this if you have finished the rest of the lab.

### UART Pattern Control
If you have been using UART, could you set which LEDs are on or off based off some UART command? Would you want to send an Array over UART such as [1 0 1 0] or would you want to send a byte that corresponds to the status? Can you not only say which LEDs are on, but also tell them to blink at a particular rate if they were on (so LED1 Blink every 100ms)?
