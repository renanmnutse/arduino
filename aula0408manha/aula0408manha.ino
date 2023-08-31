int led1 = 9;
int led2 = 6;
int ajuste = A0;
int adc = 0;
int pwm = 0;
void setup() {
  pinMode(ajuste, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  adc = analogRead(ajuste);
  pwm = map(adc, 0, 1023, 0, 255); //normaliza
  analogWrite(led1, pwm);
  analogWrite(led2, pwm);
}
