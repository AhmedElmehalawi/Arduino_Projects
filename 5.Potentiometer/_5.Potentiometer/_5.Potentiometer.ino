 int led = 3;
 int pot = A0;

void setup() {
PinMode(3,OUTPUT);
PinMode(A0,INPUT);
}

void loop() {  
int x = analogRead(pot);
digitalWrite(3,HIGH);
delay(x);  
digitalWrite(3,LOW);
delay(x);
}
