int led[] = {12,15,02,17};

void setup() {
  pinMode(12, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(02, OUTPUT);
  pinMode(17, OUTPUT);
}

void loop() {
  digitalWrite(17, 0);
  delay(50);
  digitalWrite(17, 1);
  delay(50);
  digitalWrite(02, 0);
  delay(50);
  digitalWrite(02, 1);
  delay(50);
  digitalWrite(15, 0);
  delay(50);
  digitalWrite(15, 1);
  delay(50);
  digitalWrite(12, 0);
  delay(50);
  digitalWrite(12, 1);
  delay(50);
}