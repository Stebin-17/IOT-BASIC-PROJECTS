// the setup function runs once when you press reset or power the board

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9= 5;
int LED10= 4;
int LED11= 3;
int LED12 = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED11, OUTPUT);
  pinMode(LED12, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH); 
  delay(100); 
  digitalWrite(LED2, HIGH); 
  delay(100);
  digitalWrite(LED3, HIGH); 
  delay(100);
  digitalWrite(LED4, HIGH); 
  delay(100);
  digitalWrite(LED5, HIGH); 
  delay(100);
  digitalWrite(LED6, HIGH); 
  delay(100);
  digitalWrite(LED7, HIGH); 
  delay(100);
  digitalWrite(LED8, HIGH); 
  delay(100);
  digitalWrite(LED9, HIGH); 
  delay(100);
  digitalWrite(LED10, HIGH); 
  delay(100);
  digitalWrite(LED11, HIGH); 
  delay(100);
  digitalWrite(LED12, HIGH); 
  delay(100);
  digitalWrite(LED1, LOW);   
  delay(100); 
  digitalWrite(LED2 , LOW);   
  delay(100);
  digitalWrite(LED3, LOW);   
  delay(100);
  digitalWrite(LED4, LOW);   
  delay(100);
  digitalWrite(LED5, LOW);   
  delay(100);
  digitalWrite(LED6, LOW);   
  delay(100);
  digitalWrite(LED7, LOW);   
  delay(100);
  digitalWrite(LED8, LOW);   
  delay(100);
  digitalWrite(LED9, LOW);   
  delay(100);
  digitalWrite(LED10, LOW);   
  delay(100);
  digitalWrite(LED11, LOW);   
  delay(100);
  digitalWrite(LED12, LOW);   
  delay(100);                     
}