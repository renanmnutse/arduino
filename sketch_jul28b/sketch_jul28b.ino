//semáforo carros 1
int red1 = 13;
int yellow1 = 12;
int green1 = 11;

//semáforo carros 2
int red2 = 8;
int yellow2 = 7;
int green2 = 6;

//semáforo pessoas 1
int red3 = 10;
int green3 = 9;

//semáforo pessoas 2
int red4 = 5;
int green4 = 4;

void starting(int redCar1, int yellowCar1, int greenCar1, int redCar2, int yellowCar2, int greenCar2, int redPed1, int greenPed1, int redPed2, int greenPed2){
  digitalWrite(redCar1, HIGH);
  digitalWrite(yellowCar1, LOW);
  digitalWrite(greenCar1, LOW);
  digitalWrite(redCar2, LOW);
  digitalWrite(yellowCar2, LOW);
  digitalWrite(greenCar2, HIGH);
  digitalWrite(redPed1, LOW);
  digitalWrite(greenPed1, HIGH);
  digitalWrite(redPed2, HIGH);
  digitalWrite(greenPed2, LOW);
}

void faseTroca(int toYellow, int endGreen, int endPedestreGreen, int beginPedestreRed, int endPedestreRed, int beginPedestreGreen){
  digitalWrite(toYellow, HIGH);
  digitalWrite(endGreen, LOW);
  digitalWrite(endPedestreGreen, LOW);
  digitalWrite(endPedestreRed, LOW);
  digitalWrite(beginPedestreGreen, HIGH);
  digitalWrite(beginPedestreRed, HIGH);
  for(int i = 0; i < 4; i++){
    delay(250);
    digitalWrite(beginPedestreGreen, LOW);
    digitalWrite(beginPedestreRed, LOW);
    delay(250);
    digitalWrite(beginPedestreGreen, HIGH);
    digitalWrite(beginPedestreRed, HIGH);
  }
}
void semaforoLogic(){
  starting(red1, yellow1, green1, red2, yellow2, green2, red3, green3, red4, green4);
  delay(6000);
  faseTroca(yellow2, green2, green3, red3, red4, green4);
  delay(1500);
  starting(red2, yellow2, green2, red1, yellow1, green1, red4, green4, red3, green3);
  delay(6000);
  faseTroca(yellow1, green1, green4, red4, red3, green3);
  delay(1500);
}

void setup() {
  Serial.begin(9600);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(green4, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
}
void loop() {
  semaforoLogic();
}