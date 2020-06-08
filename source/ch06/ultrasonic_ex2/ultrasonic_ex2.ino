void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}
void loop() {
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
  
  digitalWrite(2, LOW);  
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  int distance = pulseIn(3, HIGH) / 58.2;
  Serial.println(distance);
  if (distance < 10) {
   analogWrite(11, 255);
  } else if (distance < 20) {
    analogWrite(10, 255);
  } else if (distance < 30) {
    analogWrite(9, 255);
  }
  delay(100);
}
