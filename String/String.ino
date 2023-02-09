String str = "CDTI \n";
String name = "panyaphat Pipatsalaphan";
int age = 16;
float gpa = 3.41;


void setup() {
  Serial.begin(9600);


  

}

void loop() {
  Serial.println("Name:"+ name );
  Serial.println("age:"+ (String)age + "years" );
  Serial.println("GPAX:"+(String)gpa);
  delay(1000);

  

}
