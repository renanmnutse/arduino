int led1 = 9;
int led2 = 6;
int ldr = A0;
int valor = 0;
void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  int valor = analogRead(ldr);
  Serial.println(valor);
  if(valor <= 100){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
