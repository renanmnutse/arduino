#include <Ultrasonic.h>

/*
const int pinoPIR = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pinoPIR, INPUT);
}

void loop() {
  if(digitalRead(pinoPIR) == HIGH){
    Serial.println("detected");
  } else {
    Serial.println("---");
  }
}

*/
int luzinha = 9;
Ultrasonic ultrasom(8, 7);
long distancia;

void setup(){
  Serial.begin(9600);
  pinMode(luzinha, OUTPUT);
}

void loop(){
  distancia = ultrasom.read(CM);
  if(distancia < 50){
    digitalWrite(luzinha, HIGH);
  } else {
    digitalWrite(luzinha, LOW);
  }
  Serial.println(distancia);
  Serial.println(" cm");
  delay(100);
}