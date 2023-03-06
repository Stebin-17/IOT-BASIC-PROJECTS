int trig = 4;
int echo = 5;
int led = 10;
int led1 = 11;
int led2 = 12;

// float so that we can handle decimals
float duration;
float distance;

void setup() {
  // put your setup code here, to run once:

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

  Serial.begin(9600);

}

float ultrasonic() {
  digitalWrite(trig, LOW);
  delay(100);
  digitalWrite(trig, HIGH);
  delay(100);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration * .0343) / 2;

  return distance;
 
}

void loop() {
 Serial.println(ultrasonic());

 if (ultrasonic() <= 10) {
  //do something
  digitalWrite(led,HIGH);
 }
 else {
  //do something else
  digitalWrite(led,LOW);
 }

 if (ultrasonic() >10 && ultrasonic() <= 30) {
  //do something
  
  digitalWrite(led1, HIGH);
 }
 else {
  //do something else
  digitalWrite(led1, LOW);
  
 }

 if (ultrasonic() > 30) {
  //do something
  digitalWrite(led2,HIGH);
 }
 else {
  //do something else
  digitalWrite(led2, LOW);

 }

}