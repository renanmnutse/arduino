#include <LiquidCrystal.h>

#include "dht.h"

const int pinoDHT11 = A2;
LiquidCrystal lcd (2,4,10,11,12,13);

dht DHT;

void setup() {
  lcd.begin(16,2);
  lcd.print("PALMEIRAS");
  Serial.begin(9600);
  delay(2000);
  lcd.clear();
}

void loop() {
  DHT.read11(pinoDHT11);
  Serial.print("Umidade: ");
  Serial.print(DHT.humidity);
  Serial.print("%");
  Serial.print(" / Temperatura: ");
  Serial.print(DHT.temperature, 0);
  Serial.print("\n");
  lcd.setCursor(0,0);
  lcd.print("Umidade: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  lcd.setCursor(0,1);
  lcd.print("Temperatura: ");
  lcd.print(DHT.temperature, 0);
  delay(1000);
  lcd.clear();
}
