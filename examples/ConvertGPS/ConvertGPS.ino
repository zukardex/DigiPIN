#include <DigiPIN.h>

void setup() {
  Serial.begin(9600);
  float lat = 8.5434657;
  float lon = 76.9031381;

  String digipin = DigiPIN::getDigiPin(lat, lon);
  Serial.print("DigiPIN for (");
  Serial.print(lat, 7);
  Serial.print(", ");
  Serial.print(lon, 7);
  Serial.print("): ");
  Serial.println(digipin);
}

void loop() {
}
