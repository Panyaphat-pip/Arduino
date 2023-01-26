int LEDDOWN[] = {17,2,15,12};
int LEDUP[] = {12,15,2,17};


void setup() {
  Serial.begin(9600);
  pinMode (LEDDOWN[0] , OUTPUT);
  pinMode (LEDDOWN[1] , OUTPUT);
  pinMode (LEDDOWN[2] , OUTPUT);
  pinMode (LEDDOWN[3] , OUTPUT);
  pinMode (LEDUP[0], OUTPUT);
  pinMode (LEDUP[1], OUTPUT);
  pinMode (LEDUP[2], OUTPUT);
  pinMode (LEDUP[3], OUTPUT);


}

void loop() {
  for (int x = 0; x < 3; x++){
    Serial.println(x);
    digitalWrite (LEDDOWN[x], 0);
    delay(50);
    digitalWrite (LEDDOWN[x], 1);
    delay(50);
  }
  for (int y = 0; y < 3; y++){
    Serial.println(y);
    digitalWrite (LEDUP[y], 0);
    delay(50);
    digitalWrite (LEDUP[y], 1);
    delay(50);
  }


}
