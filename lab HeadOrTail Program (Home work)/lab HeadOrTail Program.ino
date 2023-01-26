

#define HEADIOPIN 17 // ใช้ pin ขาไหน
#define TAILIOPIN 2
#define PAUSE 3000 // ดีเลเท่าไหร่
#define REST 2000
int head = HEADIOPIN;
int tail = TAILIOPIN;
long randomNumber = 0L; // ใช้ "L" เพื่อบอกว่ามัน เป็นข้อมูลประเภทยาว ,ไม่ใช่ int.


void setup() {
  
  Serial.begin(9600); 
  pinMode(head, OUTPUT);
  pinMode(tail, OUTPUT);
  randomSeed(analogRead(0)); // seed สุ่มตัวเลข
}

void loop() {
  randomNumber = generateRandomNumber();
  digitalWrite(head, 0);     //ปิดไฟทั้งคู่
  digitalWrite(tail, 0);
  delay(PAUSE - REST);         //Let them see both are off for a time slice
  if (randomNumber % 2 ==1) {  //เลขคู่จะเป็นหัว
    digitalWrite(head, 1);
    digitalWrite(tail, 0);
  } else {
    digitalWrite(tail, 1); //ตัวเลขอื่นๆ จะเป็นก้อย
    digitalWrite(head, 0);
  }
  Serial.println(randomNumber % 2 ==1 );  //แสดงผล เลขสุ่มไปที่ serial mornitor 0 คือ หัว 1 คือ ก้อย
  delay(PAUSE);                //หยุด 3 วินาที
}

long generateRandomNumber()
  {
    return random(0, 1000000); //สุ่ทตัวเลขระหว่าง 0 ถึง 1000000
  }
