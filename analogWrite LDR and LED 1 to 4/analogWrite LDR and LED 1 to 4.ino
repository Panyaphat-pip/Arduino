int iot = 15;
int ntp = 15;
int wifi = 2;
int bt = 17;
int LDR = 36;
void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  pinMode(ntp , OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(bt, OUTPUT);
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(bt, HIGH);

}

void loop() {
  int val = map(analogRead(LDR),600,900,1,4);
  Serial.println(analogRead(LDR));
  if (val == 1){
  digitalWrite(iot, LOW);
  digitalWrite(ntp, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(bt, HIGH);
  }
  if (val == 2){
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(bt, HIGH);
  }
  if (val == 3){
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(bt, HIGH);
  }
  if (val == 4){
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(bt, LOW);
  }

}
