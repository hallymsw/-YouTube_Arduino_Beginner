void setup() {
  Serial.begin(9600);    //시리얼 통신 속도 설정하기
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}
void loop() {
  //초기화
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  int distance = pulseIn(3, HIGH)/ 58.2;

  Serial.println(distance);
  delay(100);

}
