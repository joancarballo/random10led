int ledPin1 = 13; 
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;
// int ledPin7 = 7;
// int ledPin8 = 6; 
// int ledPin9 = 5;
// int ledPin10 = 4;

void setup ()  {
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT); 
  // pinMode(ledPin7, OUTPUT); 
  // pinMode(ledPin8, OUTPUT);
  // pinMode(ledPin9, OUTPUT); 
  // pinMode(ledPin10, OUTPUT);
  digitalWrite(ledPin1,HIGH);
  digitalWrite(ledPin2,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin4,HIGH);
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH);
  // digitalWrite(ledPin7,HIGH);
  // digitalWrite(ledPin8,HIGH);
  // digitalWrite(ledPin9,HIGH);
  // digitalWrite(ledPin10,HIGH);
  delay(1000);
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW);
  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  // digitalWrite(ledPin7,LOW);
  // digitalWrite(ledPin8,LOW);
  // digitalWrite(ledPin9,LOW);
  // digitalWrite(ledPin10,LOW);
  delay(500);
} 

void loop() { 
  int myLeds[] = {ledPin1, ledPin2, ledPin3, ledPin4, ledPin5, ledPin6};
  int pinSelected = myLeds[random(1, 7)];
  digitalWrite(pinSelected,HIGH);
  delay(random(500, 1500));
  digitalWrite(pinSelected,LOW);
  delay(100);
}