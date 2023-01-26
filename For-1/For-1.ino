]int iot = 12;




void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  for(int i=1 ; i <= 20 ; i++){
    Serial.println(i);
    digitalWrite(iot, LOW);
    delay(1000);
    digitalWrite(iot, HIGH);
    delay(1000);
  
  }
 
}

void loop() {
  
  
  

}
