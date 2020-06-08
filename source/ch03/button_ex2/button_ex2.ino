void setup() {
  pinMode(8,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);


}

void loop() {
  int value = digitalRead(8);
  if(value==HIGH){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
  }
}
