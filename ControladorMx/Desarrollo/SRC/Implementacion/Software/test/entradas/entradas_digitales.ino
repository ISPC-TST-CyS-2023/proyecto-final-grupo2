//link Wokwi: https://wokwi.com/projects/368995898381693953

//declaración de constantes
const int ldrPin1 = 12;
const int ldrPin2 = 13;
const int ldrPin3 = 14;
const int pirPin1 = 2;
const int pirPin2 = 4;
const int pirPin3 = 15;
//se inicia el monitor serie y se configuran las entradas
void setup() {
  Serial.begin(115200);
  pinMode(ldrPin1, INPUT);
  pinMode(ldrPin2, INPUT);
  pinMode(ldrPin3, INPUT);
  pinMode(pirPin1, INPUT);
  pinMode(pirPin2, INPUT);
  pinMode(pirPin3, INPUT);
}
//se leen las entradas y muestra el resultado por monitor serie
void loop() {
  int ldr1 = !digitalRead(ldrPin1);
  int ldr2 = !digitalRead(ldrPin2);
  int ldr3 = !digitalRead(ldrPin3);
  int pir1 = digitalRead(pirPin1);
  int pir2 = digitalRead(pirPin2);
  int pir3 = digitalRead(pirPin3);

  Serial.print("Valores LDR: ");
  Serial.print(ldr1);
  Serial.print(" ");
  Serial.print(ldr2);
  Serial.print(" ");
  Serial.println(ldr3);

  Serial.print("Valores PIR: ");
  Serial.print(pir1);
  Serial.print(" ");
  Serial.print(pir2);
  Serial.print(" ");
  Serial.println(pir3);

  delay(1000);
}
