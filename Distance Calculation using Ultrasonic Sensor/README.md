# DISTANCE MEASUREMENT USING ULTRASONIC SENSOR
## AIM:
**TO DETERMINE THE DISTANCE OF THE OBJECT BY USING ULTRASONIC SENSOR AND VIEWING THE OUTPUT AT THE SERIAL MONITOR.**
## HARDWARES REQUIRED:

**- Arduino Uno or Pro Mini**

**- Ultrasonic sensor Module(HC-SR04)**

**- Bread board**

**- Connecting wires(Jumper Wires)**

**- Arduino IDE**

### Ultrasonic Sensor Module:

**There are many types of Arduino distance sensors, but in this project we have used the HC-SR04 to measure distance in range of 2cm-400cm with an accuracy of 3mm. The sensor module consists of an ultrasonic transmitter, receiver and control circuit.**

#### IMAGE:

![image](https://user-images.githubusercontent.com/114398468/211246833-85b3d151-2f77-4ca7-b848-7ee4abd7160e.png)

**The sensor has 4 pins. VCC and GND go to 5V and GND pins on the Arduino, and the Trig and Echo go to any digital Arduino pin. Using the Trig pin we send the ultrasound wave from the transmitter, and with the Echo pin we listen for the reflected signal.**

## CIRCUT DESIGN:

![image](https://user-images.githubusercontent.com/114398468/211246900-ec93d1b2-883d-44d0-8608-859b7387af96.png)

**The Ground and the VCC pins of the module needs to be connected to the Ground and the 5 volts pins on the Arduino Board respectively and the trig and echo pins to any Digital I/O pin on the Arduino Board.**

## AURDINO CODE:
![image](https://user-images.githubusercontent.com/114398468/211247687-6f324834-45e1-4303-9a49-20b7e6d3f8e3.png)


## OUTPUT:
![image](https://user-images.githubusercontent.com/114398468/211247148-45445efd-d7dd-4c46-8839-3f5d7ec425e8.png)

## REFERENCE:

- https://arduinogetstarted.com/tutorials/arduino-ultrasonic-sensor
- https://circuitdigest.com/microcontroller-projects/arduino-ultrasonic-sensor-based-distance-measurement#:~:text=Connecting%20wires-,Ultrasonic%20Sensor%20Module,transmitter%2C%20receiver%20and%20control%20circuit.









