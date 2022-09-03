#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Trabajar a 115200
  pinMode(LED, OUTPUT);               // Configurar led como salida
  Serial.println("[ Inicio OK :) ]"); // Mensaje de inicio
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("LED [ON]");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED [OFF]");
  delay(1000);
}