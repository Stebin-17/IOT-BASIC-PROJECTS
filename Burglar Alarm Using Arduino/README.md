# Burglar Alarm Using Arduino Uno
#### - Problem Statement

To detect any unwanted movement in an area or to keep out thieves from entering that area, we need a sensor that can trigger an alarm. For this we will be requiring a sensor that can detect the motion of any body and trigger the alarm as soon as it detects the motion. In short, to make a burglar detection system we need a motion detection sensor and a buzzer and using Arduino Uno we can make a burglar detection system.

# list of components

- Arduino uno 
- Breadboard
- Connecting wires
- 1 RGB LED
- 1 PIR sensor

# Hardware assembly for creating a burglar alarm with Arduino Uno and PIR sensor

We connected the output of the PIR sensor to the Arduino by connecting the brown wire to pin 6 whereas the buzzer is connected with Arduino using the gray wire that connects it with pin 3 of Arduino.Despite using the buzzer for indication we have also used the RGB LED for indication. So, when there is no movement, the green LED will remain on but as soon as some movement is detected the red LED will turn on and buzzer will also be turned on respectively.

# Conclusion
The sensors used for detecting the movement of the objects in an area are the PIR sensors that pick up the movement from the infrared radiation emitted in the form of heat from a moving object. This type of sensor can be used in a number of applications like automatic opening of doors, automatic lights and security alarms. To demonstrate how we can detect any unwanted movement in an area we have created a burglar alarm system using the PIR sensor with Arduino.
