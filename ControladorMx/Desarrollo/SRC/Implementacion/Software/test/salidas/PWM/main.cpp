/*
  Autor : Alfredo Palacios
  Fecha : 30/06/2023
  Microcontrolador : ESP32 38 PINES
  Entorno de desarrollo : PlatformIO
  Descripción: Codigo PWM, aumenta y disminucion de la intensidad de un led
*/

#include <Arduino.h>
// Declaramos la intensidad del brillo del led
int brillo = 0;
// Declaramos el pin que enviara el voltaje
int pinLed=25;
//Características del PWM
const int frecuencia = 1000;
const int canal = 0;
const int resolucion = 10;
void setup()
{
  //Inicializamos las características del pwm
  ledcSetup(canal, frecuencia, resolucion);
  // Definimos que el pin 2 sacara el voltaje
  ledcAttachPin(pinLed, OUTPUT);
}
void loop()
{
  // Incrementamos el brillo de 0 a 256
  for (brillo = 0; brillo <= 256; brillo += 1) {
    //Encendemos el pinLed con la intensidad del brillo
     analogWrite(pinLed, brillo);
    //Esperamos 15 milisegundos
    delay(15); 
  }
  delay(100);
  // Decrementamos el brillo de 0 a 256
  for (brillo = 256; brillo >= 0; brillo -= 1) {
    //Encendemos el pinLed con la intensidad del brillo
     analogWrite(pinLed, brillo);
    //Esperamos 15 milisegundos
    delay(15); 
  }
}