int LED[] = {17,2,15,12};




void setup() {
  Serial.begin(9600);
  pinMode (LED[0], OUTPUT);
  pinMode (LED[1], OUTPUT);
  pinMode (LED[2], OUTPUT);
  pinMode (LED[3], OUTPUT);
  

}

void loop() {
  for( int x = 0; x <= 3; x++){
    Serial.println(x);
    digitalWrite(LED[x], 0);
    delay(500);
    digitalWrite(LED[x], 1);
    delay(500);
    


  }

}
