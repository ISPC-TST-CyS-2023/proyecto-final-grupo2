//////////////////////////////////////////////
//      Control Salidas Digitales ESP32     //
//      PIN 5 - 14 - 16 - 17 - 18 - 27      //
//////////////////////////////////////////////

#include <Arduino.h>

// DEFINICION DE CONSTANTES //
const int pin5 = 5;
const int pin14 = 14;
const int pin16 = 16;
const int pin17 = 17;
const int pin18 = 18;
const int pin27 = 27;

// DEFINICION EN FUNCION SETUP, DEL MODO DE CADA SALIDA - OUTPUT //
void setup() {
  pinMode(pin5, OUTPUT);
  pinMode(pin14, OUTPUT);
  pinMode(pin16, OUTPUT);
  pinMode(pin17, OUTPUT);
  pinMode(pin18, OUTPUT);
  pinMode(pin27, OUTPUT);
}

// DEFINCION EN FUNCIN LOOP, DEL ENCENDIDO Y APAGADO DE CADA PIN, UTILIZANDO "digitalWrite()" y "Delay()" //
void loop() {
  // Encender y apagar los pines uno a uno en un bucle
  digitalWrite(pin5, HIGH);
  delay(500);
  digitalWrite(pin5, LOW);

  digitalWrite(pin14, HIGH);
  delay(500);
  digitalWrite(pin14, LOW);

  digitalWrite(pin16, HIGH);
  delay(500);
  digitalWrite(pin16, LOW);

  digitalWrite(pin17, HIGH);
  delay(500);
  digitalWrite(pin17, LOW);

  digitalWrite(pin18, HIGH);
  delay(500);
  digitalWrite(pin18, LOW);

  digitalWrite(pin27, HIGH);
  delay(500);
  digitalWrite(pin27, LOW);
}
