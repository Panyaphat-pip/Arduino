
char x[3][4]={ {5,10,15,20},
          {25,30,35,40},
          {45,50,55,} };
void setup() {
  Serial.begin(9600);
  Serial.begin(x[1][2]); //เอา 35 มาแสดง
  Serial.begin(x[2][3]); //เอา 60 มาแสดง
  
  for(int i=0; i<3; i++){
    for(int j=0; j<4; i++){
      Serial.println((String)x[i][j]+ "\t");
    }
    Serial.println();
  }

}

void loop() {
 

}
