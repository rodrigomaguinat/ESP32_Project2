#include <Arduino.h>

#define LED 2
#define Button 5

void Interrupt(){
  digitalWrite(LED, !digitalRead(LED));
  Serial.print("Button press");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
  attachInterrupt(Button, Interrupt, FALLING);   // FALLING : Flanco de bajada
  Serial.println("[init OK :) ]");
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<1000; i++){
    delay(10000);
  }
}

// Para poder ver el MOonitor Serial, añadimos en el archivo platformio.ini
/*
;windows
;monitor_post = COM3
;UNIX
;monitor_port = \dev\ttyUSB1
monitor_baud = 115200
*/