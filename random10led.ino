int ledPin1 = 13; 
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;
int ledPin7 = 7;
int ledPin8 = 6; 
int ledPin9 = 5;
int ledPin10 = 4;

void setup ()  {
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(ledPin5, OUTPUT); 
  pinMode(ledPin6, OUTPUT); 
  pinMode(ledPin7, OUTPUT); 
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT); 
  pinMode(ledPin10, OUTPUT);
} 

void loop() { 
  int myLeds[] = {ledPin1, ledPin2, ledPin3, ledPin4, ledPin5, ledPin6, ledPin7, ledPin8, ledPin9, ledPin10};
  int pinSelected = myLeds[random(1, 10)];
  digitalWrite(pinSelected,HIGH);
  delay(random(500, 3500));
  digitalWrite(pinSelected,LOW);
  delay(500);
}