

int iot = 12;
int ntp = 15;
int wifi = 2;


void prayut(void){         //ไม่รับค่าเข้า ไม่รับค่าออก
   digitalWrite(iot, LOW);
   delay(500);
   digitalWrite(iot, HIGH);
   delay(500);

}

void ntpprayutt(int value){    //รับค่าเข้า ไม่ส่งค่าออก
  digitalWrite(ntp, LOW);
  delay(value);
  digitalWrite(ntp, HIGH);
  delay(value);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(wifi, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  prayut();
  ntpprayutt(1000);
  digitalWrite(wifi, LOW);
  delay(wifiblink(100));
  digitalWrite(wifi, HIGH);
  delay(wifiblink(10));
 

}
