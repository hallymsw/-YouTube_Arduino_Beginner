int pinNum=9;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
//  analogWrite(pinNum,0);
//  dealy(10);
//  analogWrite(pinNum,1);
//  dealy(10);
//  analogWrite(pinNum,2);
//  dealy(10);
//  analogWrite(pinNum,3);
//  dealy(10);
//  analogWrite(pinNum,3);
//  dealy(10);
for(int i=0;i<256;i++){
  analogWrite(pinNum,i);
  delay(10);
}
for(int i=255;i>-1;i--){
  analogWrite(pinNum,i);
  delay(10);
}

}
