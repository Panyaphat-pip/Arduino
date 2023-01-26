int LDR = 36;
int iot = 12;
int light = 0;

void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  pinMode(LDR, INPUT);

}

void loop() {
  analogRead(LDR);
  light = analogRead(LDR);
  for (int i = light; i > 0; i--){
    analogWrite(iot,light);
  }
  
  Serial.println(light);

}
