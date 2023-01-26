#include <Wire.h>
#define LM73_ADDR 0x4D

double temp = 0;
int analog_value = 0;

float readTemperature() {
  Wire1.beginTransmission(LM73_ADDR);
  Wire1.write(0x00);
  Wire1.endTransmission();
  uint8_t count = Wire1.requestFrom(LM73_ADDR, 2);
  float temp = 0.0;
  if (count == 2) {
    byte buff[2];
    buff[0] = Wire1.read();
    buff[1] = Wire1.read();
    temp += (int)(buff[0] << 1);
    if (buff[1] & 0b10000000) temp += 1.0;
    if (buff[1] & 0b01000000) temp += 0.5;
    if (buff[1] & 0b00100000) temp += 0.25;
    if (buff[0] & 0b10000000) temp += -1.0;
  }
  return temp;
}

void measure() {
  temp = readTemperature();
  analog_value = analogRead(36);
  if (analog_value > 1000) {
    analog_value = 1000;
  }
  int ll = (1000 - analog_value) * 100 / 1000;
  String data = "temp=" + String(temp) + " ,Light=" + String(11);
  Serial.println(data);
}

void setup() {
  Serial.begin(115200);
  Wire1.begin(4, 5);
}

void loop() {
  measure();
  delay(2000);
}