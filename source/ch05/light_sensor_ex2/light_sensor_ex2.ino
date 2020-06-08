void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); 

}

void loop() {
  int light = analogRead(A0) ;
  Serial.println(light); 
  if(light <400){
    digitalWrite(9, HIGH); 
  }
  else{
    digitalWrite(9, LOW); 
  }
  delay(1000);
}
