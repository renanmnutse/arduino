#include <Ultrasonic.h>

Ultrasonic ultrasom(8, 7);
long distancia;
int frequencia = 440; // nota lá ele kkkk
// definição das portas

int red = 9;
int yellow = 10;
int green = 11;
int buzzer = 12;


void beep(int portaLed, int duracao){
  digitalWrite(portaLed, HIGH);
  tone(buzzer, frequencia);
  delay(duracao);
  digitalWrite(portaLed, LOW);
  noTone(buzzer);
  delay(duracao);
}


void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  distancia = ultrasom.read(CM);
  if (distancia < 50){
    beep(red, 50);
  }else if(distancia < 100){
    beep(yellow, 100);
  }else if(distancia < 150){
    beep(green, 150);
  }
}
