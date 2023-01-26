int sw1 = 16;
int sw2 = 14;
int iot = 12;
int ntp = 15;

void setup() {
  Serial.begin(9600);
  pinMode (sw1, INPUT);
  pinMode (sw2, INPUT);
  pinMode (iot, OUTPUT);
  pinMode (ntp, OUTPUT);
  digitalWrite(iot, LOW);
  digitalWrite(ntp, LOW);

}

void loop() {
  char key = Serial.read();
  Serial.println(key);
  delay(10);
  switch(key){
    case 'a': digitalWrite(iot, LOW);
              Serial.println("LED IOT ON");
              delay(5000);
              break;
    case 'b': digitalWrite(iot, LOW);
              Serial.println("LED IOT ON");
              delay(5000);
              break;
    default: digitalWrite(iot, HIGH);
             digitalWrite(ntp, HIGH);
             Serial.println("OFF ALL");              
  }




}