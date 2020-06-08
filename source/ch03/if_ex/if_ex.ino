void setup() {
  Serial.begin(9600);

}
void loop() {
  int score=85;
  String grade="F";
  if(score>89){
    grade="A";
  }
  else{
    grade="B";
  }
  Serial.println(grade);
  delay(1000);
  
}
