int buzzer = 10;    // The speaker is on pin 10
int freq = 50;      // Starting frequency
 
void setup()
{
    pinMode(buzzer, OUTPUT);
}
 
void loop()
{
    freq += 100;      // add 100 to freq
 
    if (freq > 8000)
    {
        noTone(buzzer);
        freq = 50;
    }
 
    tone(buzzer, freq);
 
    delay(100);
}