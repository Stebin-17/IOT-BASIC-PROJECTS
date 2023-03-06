# Blinking ONE LED

Blinks 10 LEDs attached to the Arduino by using a for() loop to cycle back and forth through digital pins 2-7. The LEDS are turned on and off, in sequence, by using both the digitalWrite() and delay() functions .
### Hardware Required

- Arduino Board
- 10 220 ohm resistors (optional)
- 10 LEDs
- hook-up wires
- breadboard

### Circuit
Connect ten LEDS, with 220 ohm resistors in series, to digital pins 3-12 on your Arduino.

### Code
The code below begins by utilizing a for() loop to assign digital pins 3-12 as outputs for the 10 LEDs used.

In the main loop of the code, two for() loops are used to loop incrementally, stepping through the LEDs, one by one, from pin 3 to pin 12. Once pin 12 is lit, the process reverses, stepping back down through each LED.