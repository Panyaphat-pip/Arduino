int bt =17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup() {
  Serial.begin(9600);
  pinMode(bt , OUTPUT);
  pinMode(wifi , OUTPUT);
  pinMode(ntp , OUTPUT);
  pinMode(iot , OUTPUT);
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  

  
  

}

void loop() {
  for (int i = 250 ;i > 0; i--){
  analogWrite(iot,i);
  delay(10);
  }

}
