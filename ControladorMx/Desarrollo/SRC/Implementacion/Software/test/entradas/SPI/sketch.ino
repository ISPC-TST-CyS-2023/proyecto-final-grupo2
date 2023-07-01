#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

#define TFT_DC 2
#define TFT_CS 15
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup() {
  tft.begin();

  tft.setCursor(20, 120);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(3);
  tft.println("GRUPO 2");

  tft.setCursor(24, 160);
  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(2);
  tft.println("Prueba: puerto SPI :-)");
}

void loop() { delay(10); }
