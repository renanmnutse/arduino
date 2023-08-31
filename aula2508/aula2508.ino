int A = 2; // cima
int B = 3; // direito superior
int C = 4; // direita inferior
int D = 5; // baixo
int E = 6; // esquerda inferior
int F = 7; // esquerda superior
int G = 8; // meio
int PONTO = 9; //ponto
int buzzer = 10;
int atraso = 1000;

byte digitos[10][7] = {
  {1,1,1,1,1,1,0}, 
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
};
void writeNumber(int digito){
  int porta = 2;
  for (int display = 0; display < 7; display++){
    digitalWrite(porta, digitos[digito][display]);
    porta++;
  }
}

void beep(int duracao){
  tone(buzzer, 30);
  delay(duracao);
  noTone(buzzer);
  delay(duracao);
}

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(PONTO, OUTPUT);
}

void loop() {
  for (int i = 9; i >= 0; i--){
    writeNumber(i);
    if(i >= 1){
      beep(30);
    } else {
      beep(2000);
      delay(1000);
    }
    delay(atraso);
  }
}
