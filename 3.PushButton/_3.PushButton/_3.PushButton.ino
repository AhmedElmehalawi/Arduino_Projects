int led = 2;
int Pbutton = 4;

void setup() {
    pinMode(2,OUTPUT);
    pinMode(4,INPUT);
}

void loop() {
    int X = digitalRead(4);
    if(X == HIGH){
      digitalWrite(2,HIGH);
      }
    else if(X == LOW){
      digitalWrite(2,LOW);
      }  
}
