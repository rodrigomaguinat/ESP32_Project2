#include <Arduino.h>

#define adc_1 15
#define adc_2 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);       // Iniciar la comunicación serial a 115200 b/s
  Serial.println("[Yes I do _:) ]");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("ADC Value: ");
  Serial.println(analogRead(adc_1));
  Serial.print("ADC Value: ");
  Serial.println(analogRead(adc_2));
  delay(1000);
}

// Para poder ver el MOonitor Serial, añadimos en el archivo platformio.ini
/*
;windows
;monitor_post = COM3
;UNIX
;monitor_port = \dev\ttyUSB1
monitor_baud = 115200
*/