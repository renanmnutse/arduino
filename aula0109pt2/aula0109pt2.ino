#include <Servo.h>

const int pinoServo = 6;
Servo s;
int pos;

void setup() {
  s.attach(pinoServo);
  s.write(0);
}

void loop() {
  for(pos = 0; pos < 720; pos++){
    s.write(pos);
    delay(1);
  }
  // put your main code here, to run repeatedly:

}
