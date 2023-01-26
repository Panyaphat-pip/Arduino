int bt = 17;
int wifi =2;
int ntp = 15;
int iot =12;
int sw1 = 16;
int sw2 = 14;





void setup() {
  pinMode(bt , OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);
 
}

void loop() { 

  if (digitalRead(sw1) == LOW)
  {
    forward();
  }
  else if (digitalRead(sw2) == LOW)
  {
    backward();
  }
  else{
    stoped();
  }


    

  
   
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