/*
  GPS Fake using custom chip
  by Anderson Costa

  GPS NMEA 0183 Messaging Protocol 101
  https://docs.arduino.cc/learn/communication/gps-nmea-data-101


  NMEA Generator
  https://www.nmeagen.org/
*/

#include "NMEA.h"

#define LEN(arr) ((int)(sizeof(arr) / sizeof(arr)[0]))

union {
  char bytes[4];
  float valor;
} velocidadeGPS;

float latitude;
float longitude;

NMEA gps(GPRMC);                            // Creates a GPS data connection with sentence type GPRMC


void setup() {
  Serial.begin(115200);
  Serial1.begin(9600);                      // Serial1 is connected to the custom chip
  Serial.println("Data received from GPS Fake:");
}

void loop() {

  while (Serial1.available()) {             // Waits for serial port data

    char serialData = Serial1.read();       // Receives data from GPS serial port
    Serial.print(serialData);


    if (gps.decode(serialData)) {           // Checks if the GPS sentence is valid
      if (gps.gprmc_status() == 'A') {      // Checks if GPS status is 'A'

        velocidadeGPS.valor = gps.gprmc_speed(KMPH);        // Receives GPS speed in km/h

      } else {
        velocidadeGPS.valor = 0;
      }

      latitude  = gps.gprmc_latitude();
      longitude = gps.gprmc_longitude();

      // Add line break
      Serial.println();
      Serial.println();

      // Show Latitude
      Serial.print(" Latitude: ");
      Serial.println(latitude, 8);

      // Show Longitude
      Serial.print("Longitude: ");
      Serial.println(longitude, 8);

      // Show Speed ​​in km/h
      Serial.print("    Speed: ");
      Serial.print(velocidadeGPS.valor);
      Serial.println(" Km/h");

      // Converts Geographic Coordinates to Cartesian Plane
      convertCoordinatesToCartesian(latitude, longitude);
    }
  }
}

void convertCoordinatesToCartesian(float latitude, float longitude) {

  float latRadius = latitude  * (PI) / 180;  // Convert from Degrees to Radians
  float lonRadius = longitude * (PI) / 180;

  int earthRadius = 6371; // Radius in km

  float posX = earthRadius * cos(latRadius) * cos(lonRadius);
  float posY = earthRadius * cos(latRadius) * sin(lonRadius);

  Serial.print("        X: ");  Serial.println(posX);
  Serial.print("        Y: ");  Serial.println(posY);
}
