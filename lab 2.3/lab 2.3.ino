#define led1  12 
#define led2  15
const int led3 = 2;
const int led4 = 17;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(15, HIGH);
  delay(1000);
  digitalWrite(15, LOW);
  delay(500);
  digitalWrite(02, HIGH);
  delay(1000);
  digitalWrite(02, LOW);
  delay(500);
  digitalWrite(17, HIGH);
  delay(1000);
  digitalWrite(17, LOW);
  delay(500);
}
