void setup() {
  // put your setup code here, to run once:

}

void loop() {
    analogWrite(11, 255);   
//    analogWrite(10, 0);
//    analogWrite(9, 0);
    delay(1000);

//    analogWrite(11, 0);
    analogWrite(10, 255);
//    analogWrite(9, 0);
    delay(1000);
    
//    analogWrite(11, 0);
//    analogWrite(10, 0);
    analogWrite(9, 255);
    delay(1000);
}
