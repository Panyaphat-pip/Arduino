 int led1 = 12;
 int led2 = 15;
 int led3 = 2;
 int led4 = 17;
 int S1 = 16;
 int S2 = 14;



void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
}

void loop()
{
  int S1Val = digitalRead(S1);
  int S2Val = digitalRead(S2);
    if (S1Val == 0)                       
    {
      digitalWrite(led1, 0);
      digitalWrite(led2, 0);
      digitalWrite(led3, 0);
      digitalWrite(led4, 0);
    }
    else if(S2Val == 0)
    {
      digitalWrite(led1, 1);
      digitalWrite(led2, 1);
      digitalWrite(led3, 1);
      digitalWrite(led4, 1);
    }
}