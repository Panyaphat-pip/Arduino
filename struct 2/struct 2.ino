
struct LED{
  String name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;
};
struct LED led1,led2;

int led [4] = {led1.iot,led1.ntp,led1.wifi,led1.bt};

void setup() {
  Serial.begin(9600);
  pinMode(led1.iot,OUTPUT);
  pinMode(led1.ntp,OUTPUT);
  pinMode(led1.wifi,OUTPUT);
  pinMode(led1.bt,OUTPUT);
  led1.name = "Panyaphat";
  digitalWrite(led1.iot, HIGH);
  digitalWrite(led1.ntp, HIGH);
  digitalWrite(led1.wifi, HIGH);
  digitalWrite(led1.bt, HIGH);

}

void loop() {
  Serial.println("hello"+ led1.name );
  for (int i = 0; i < 4; i++){
    digitalWrite(led[i],LOW);
    delay(20);
    digitalWrite(led[i],HIGH);
    delay(20);

  }

}
