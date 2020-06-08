int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
void setup() {
  Serial.begin(9600);
  for( int i=0;i<8;i++){
    Serial.println(melody[i]);
    }


}

void loop() {
  // put your main code here, to run repeatedly:

}
