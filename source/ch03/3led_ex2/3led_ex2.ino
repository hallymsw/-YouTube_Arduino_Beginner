int r = 255, g = 255, b = 255;
void setup() {
   Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}
void loop() {
  if (digitalRead(2) == HIGH) {
    Serial.print("2");
    digitalWrite(11, r);
    delay(1000);
    digitalWrite(11, 0);
  }
if (digitalRead(3) == HIGH) {
  Serial.print("3");
    digitalWrite(10, g);
    delay(1000);
    digitalWrite(10, 0);
  }
  if (digitalRead(4) == HIGH) {
    Serial.print("4");
    digitalWrite(9, b);
    delay(1000);
    digitalWrite(9, 0);
  }
}
