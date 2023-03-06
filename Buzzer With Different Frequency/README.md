# Buzzer with different frequency

*This example shows the how to use buzzer tone with an Arduino uno.
Output: Buzzer tone sound at the loop*

### Hardware Required

- Arduino Board
- Bread board
- Jumper cables
- buzzer
- 100 Ohm (optional)


### Code

Connect one pin (it doesn't matter which one) to the Arduino's ground (Gnd) and the other end to digital pin 10. From the Arduino, you can make sounds with a buzzer by using tone. You have to tell it which pin the buzzer is on, what frequency (in Hertz, Hz) you want, and how long (in milliseconds) you want it to keep making the tone. We will use the arduino buzzer tone generation command:

tone(10, 1200, 500); // tone on pin 8 at 1200 Hz for 1/2 second

You can leave off the duration. In that case, it will keep making a tone until you tell it to stop by calling noTone(pin) or by calling tone() with a different frequency.