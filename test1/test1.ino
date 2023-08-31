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

void setup() {
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
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
  digitalWrite(red4, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH);
  digitalWrite(green4, HIGH);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
}
