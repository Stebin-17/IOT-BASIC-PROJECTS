# Ultrasonic with led sequence

Light 3 lEDs controlled by ultrasonic sensor. There will 3 LEDs attached to their respective pins. As the distance increased the number of lit LEDs will increase. For example distance between 0 and 10 only first LED will blink, for distance between 10 and 30 only first two lights will blink, and so on.

### Hardware Required

- Ultrasonic sensor
- 3 LEDs
- bread board
- arduino uno
- jumper wires

### Circuit

Connect all the LEDs in a row, to digital pin 10-12 on your Arduino. Connect ultrasonic sensor to breadboard connect VCC to V5 pin. trg to digital pin 4, echo to digital pin 5, and gnd to ground pin.

