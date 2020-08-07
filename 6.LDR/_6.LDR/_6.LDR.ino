int led = 6;
int ldr = A0;
void setup() {
pinMode(6,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
 int x = analogRead(ldr);
 Serial.println(x);
 if(x>700){
  digitalWrite(6,HIGH);
  }
  else{
    digitalWrite(6,LOW);
    }
}
