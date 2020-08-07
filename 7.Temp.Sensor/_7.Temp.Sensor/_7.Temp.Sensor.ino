int temp = A0;

void setup() {
pinMpde(A0,INPUT);
Serial.begin(9600); 
}

void loop() {
int x = analogRead(temp);
int y = (x*500)/1023x 
Serial.print("The Temp is ");
Serial.print(y);
delay(1000);
}
