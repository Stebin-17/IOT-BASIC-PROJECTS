# LED BRIGHTNESS CONTROLLER USING POTENTIOMETER
## AIM:
**To control an LED with a potentiometer, and more specifically, how to control the LED brightness.**
## HARDWARES REQUIRED:

**- Arduino Uno or Pro Mini**

**- Potentiometer**

**- Bread board**

**- Connecting wires(Jumper Wires)**

**- Arduino IDE**

**- 220 Ohm resistor**

## CIRCUT DESIGN:

![image](https://user-images.githubusercontent.com/114398468/211302518-0cef975e-c5b6-4617-a1e7-c5a4500faca6.png)

### Steps to build the circuit:

**As a best practice we’ll start with the ground (GND). It’s very important to make a common ground for all components. To do this we will first plug a black wire (black is convention for GND) between a GND pin of the Arduino and the “minus” line on the breadboard. From this “minus” line, then we will be able to connect all other grounds, which will make things easier to manage.**

#### Add the LED:

**Connect the shorter leg of the LED to the ground. You can directly plug this leg into the “minus” line of the breadboard, or add a small black wire. Plug the other (longer) leg of the LED to an independent line on the breadboard. From this leg, add a 220 Ohm resistor to yet another line. Add a wire between the other side of the resistor and a PWM-compatible digital pin (so we can control the brightness). Here on Arduino Uno you can choose between pins 3, 5, 6, 9, 10, and 11 – you can recognize PWM compatibility with the “~” next to the pin number.**

#### Add the Potentiometer:

**Plug the 3 legs of the potentiometer to 3 different lines on the breadboard. Connect the extreme left (or right) leg to GND. Connect the other extreme leg to 5V on the Arduino. Add a wire between the middle pin and an analog pin.**


## AURDINO CODE:

![image](https://user-images.githubusercontent.com/114398468/211302953-11226479-b270-4f50-90b4-82bc036fd9a1.png)

## REFERENCE:

- https://roboticsbackend.com/arduino-control-led-brightness-with-a-potentiometer/

