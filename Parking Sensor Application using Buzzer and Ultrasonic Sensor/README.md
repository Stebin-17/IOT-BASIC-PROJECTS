# PARKING SENSOR ASSISTANCE WITH ULTRASONIC SENSOR & BUZZERS
## AIM:
**A Parking Assist Sensor using an ultrasonic (HC-SR04) sensor and a buzzer.As ones car gets closer to the Ultrasonic sensor beyond the safety net, it will begin beeping warning you that you are getting too close.**
## HARDWARES REQUIRED:

**- Arduino Uno or Pro Mini**

**- Ultrasonic sensor Module(HC-SR04)**

**- Bread board**

**- Connecting wires(Jumper Wires)**

**- Arduino IDE**

**- Buzzers**

## CIRCUT DESIGN:

**FOR ULTRASONIC_SENSOR**

![image](https://user-images.githubusercontent.com/114398468/211255970-78973e0a-4151-4690-bc4c-a905f43ded1b.png)

- Connect the Red wire from the VCC pin of the ultrasonic sensor (pin 1) to the 3.3V pin on the Arduino
- Connect the Green wire from the trigger pin of the ultrasonic sensor (pin 2) to pin 9 on the Arduino
- Connect the Blue wire from the echo pin of the ultrasonic sensor (pin 3) to pin 10 on the Arduino
- Connect the Black wire from the ground pin of the ultrasonic sensor (pin 4) to the GND pin on the Arduino

**FOR BUZZER**

![image](https://user-images.githubusercontent.com/114398468/211256038-1f26a95d-a3af-4482-b136-d0a25f515013.png)

- Connect the Purple wire from the buzzer pin ( any of them) to pin 6 on the Arduino
- Connect the Grey wire from the remaining unconnected buzzer pin to the GND pin on the Arduino.

**FINAL CIRCUT**

![CIRCUT_DESIGN](https://user-images.githubusercontent.com/114398468/211256072-7ab42e99-3999-46a5-9390-6643bf533e2e.jpeg)

## AURDINO CODE:

![image](https://user-images.githubusercontent.com/114398468/211256285-e7e04dcb-bceb-4c4b-9dd5-9c0c60c1f30a.png)

## OUTPUT:

https://user-images.githubusercontent.com/114398468/211256378-2b7cebf8-a522-4722-b1b6-920614d485d2.mp4

## REFERENCE:

- https://www.instructables.com/Distance-Sensor-with-LEDs-and-buzzer/
