# Buzzer testing

*This example shows the how to use buzzer with an Arduino uno.
Output: Buzzer sound at the loop*

### Hardware Required

- Arduino Board
- Bread board
- Jumper cables
- buzzer
- 100 Ohm (optional)


### Code

Here's the "Tone" code, embedded using codebender!

How it works? It's simple, tone(buzzer, 1000) sends a 1KHz sound signal to pin 10, delay(1000) pause the program for one second and noTone(buzzer) stops the signal sound. The loop() routine will make this run again and again making a short beeping sound.