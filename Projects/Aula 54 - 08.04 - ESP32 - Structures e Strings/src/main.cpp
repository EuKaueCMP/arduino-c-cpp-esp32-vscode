#include <Arduino.h>

void setup() 
{
 Serial.begin(9600);
 Serial.println("digite algo no monitor serial:");
}

void loop() 
{
 if(Serial.available())
 {
  char caractere = Serial.read();
  Serial.printf("voce digitou %c \n\r", caractere);
 }
}

