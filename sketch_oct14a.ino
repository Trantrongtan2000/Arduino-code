
int const den = 12;
void setup(){
Serial.begin(9600);
pinMode(8, INPUT_PULLUP); 
pinMode(den,OUTPUT);
}
 
void loop(){
  int sensorVal = digitalRead(8); 
  if (sensorVal == HIGH) { //nếu chưa nhấn
    digitalWrite(den, LOW); // tắt đèn
  }  else {  // nếu đã nhấn 
    digitalWrite(den, HIGH);// bật đèn
    Serial.println("okToPrint");
    delay(500);
  }
}
