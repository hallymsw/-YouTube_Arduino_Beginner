 #include <Servo.h>
Servo servo;

void setup(){
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  servo.attach(9);
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(3, LOW);
  delayMicroseconds(10);
  digitalWrite(3, HIGH);
  delayMicroseconds(10);
  digitalWrite(3, LOW);

  int distance = pulseIn(2, HIGH) / 58;
  Serial.println(distance);
  if (distance < 30) {
    servo.write(180);
    delay(1000);
  } else {
    servo.write(0);
    delay(1000);
  }delay(100);
}
