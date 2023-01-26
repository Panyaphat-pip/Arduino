int bt = 17;
int wifi =2;
int ntp = 15;
int iot =12;



void setup() {
  pinMode(bt , OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);

}

void loop() {
  forward();
  delay(3000);
  backward();
  delay(3000);
  right();
  delay(3000);
  left();
  delay(3000);
  stoped();
  delay(3000);

}




void forward(){      //0101
  digitalWrite(bt ,LOW);
  digitalWrite(wifi , HIGH);
  digitalWrite(ntp ,LOW);
  digitalWrite(iot,HIGH);
} 
void backward(){    //1010
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}
void right(){       //1001
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}
void left(){       //0110
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}
void stoped(){     //1111
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);
}