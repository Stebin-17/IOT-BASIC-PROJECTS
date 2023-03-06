// the setup function runs once when you press reset or power the board

int ledPin = 13;
int inputPin = 2;
int pirState = LOW;
int val = 0;
int pinSpeaker = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  pinMode(pinSpeaker, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  val = digitalRead(inputPin);  // read input Value
  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    playTone(200, 150);
    delay(150);

    if (pirState == LOW) {
      Serial.println("Motion dectected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);
    playTone(0, 0);
    delay(300);
    if (pirState == HIGH) {
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
void playTone(long duration, int freq) {
  duration = 1000;
  int period = (1.0 / freq) * 1000000;
  long elapsed_time = 0;
  while (elapsed_time < duration) {
      digitalWrite(pinSpeaker, HIGH);
      delayMicroseconds(period / 2);
      digitalWrite(pinSpeaker, LOW);
      delayMicroseconds(period / 2);
      elapsed_time += (period);
  }
}
