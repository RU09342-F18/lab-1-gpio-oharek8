# Assignment
The final assignment for this lab was to blink LEDs without the development board

# Summary of Code
The code for this main.c file is almost identical to the multiple blink main.c. The main difference is that the microcontroller has been placed into a breadboard. After placing the programmed microcontroller into the breadboard, LEDs can be connected to the desired pins. When the microcontroller is powered by a 3.3V source, the LEDs will begin to blink.

# Circuit Requirements
The microcontroller is not the only thing needed to run the LEDs safely. Resistors of about 430 ohms must be placed in series with each LED in order to limit the pin current to less than the maximum current output. Also required is a reset circuit. This is made by placing a 47,000 Ohm resistor in series with a 1nF capacitor between 3.3V and ground. The node between the resistor and capacitor is then connected to the reset pin of the capacitor

![Alt Text](https://media1.giphy.com/media/ddrTk0VJ1MZcmiIEgJ/giphy.gif)

# Off-Board Programming
Since constantly removing the MSP430G2553 microcontroller from the breadboard to reprogram it can be annoying and dangerous to the conditionof the pins, it is good to know how to program the microcontroller off the development board. Programming the chip is done by tricking it into thinking it is on the development board. This is done by jumping the Vcc, ground, reset, and test pins of the chip to there corresponding pin holes on the dev board. With the chip wired to the dev board, you can program it as normal using the cable provided with the board and CCS.

# Troubleshooting
If you find your LEDs are not blinking, be sure to check you are using the correct pins on the micrcontroller. Also, check to make sure the reset circuitry is correct. THE LEDS WILL NOT BLINK WITHOUT PROPER RESET CIRCUITRY.



