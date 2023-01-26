int led[]={12,15,2,17};


void setup() {
  pinMode(led[0] , OUTPUT);
  pinMode(led[1] , OUTPUT);
  pinMode(led[2] , OUTPUT);
  pinMode(led[3] , OUTPUT);
}

void loop() {
  int x=0;
  while(x < 4){
    digitalWrite(led[x] , LOW);
    delay(250);
    digitalWrite(led[x] , HIGH);
    delay(250);
    x++;
  }

}