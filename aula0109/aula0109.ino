#include <LiquidCrystal.h>

#include "dht.h"

const int pinoDHT11 = A2;
LiquidCrystal lcd (2,4,10,11,12,13);

dht DHT;

void setup() {
  lcd.begin(16,2);
  lcd.print("PALMEIRAS")
  Serial.begin(9600);
  delay(100);
}

void loop() {
  DHT.read11(pinoDHT11);
  Serial.print("Umidade: ");
  Serial.print(DHT.humidity);
  Serial.print("%");
  Serial.print(" / Temperatura: ");
  Serial.print(DHT.temperature, 0);
  Serial.print("\n");
  lcd.print("Umidade: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  lcd.print("\n");
  lcd.print("Temperatura: ");
  lcd.print(DHT.temperature, 0);
  delay(2000);
}
