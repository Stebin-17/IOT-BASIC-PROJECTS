int thisPin = 9;
int buzzerPin = 10;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(thisPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  if (sensorValue > (1023 / 2)) {
    digitalWrite(thisPin, HIGH);
    delay(sensorValue);
    tone(buzzerPin, sensorValue);
  } else {
    digitalWrite(thisPin, LOW);
    delay(sensorValue);
    noTone(buzzerPin);
  }
}
