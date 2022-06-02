#include <Arduino.h>

void setup() {
  Serial.begin(115200);
 
  Serial2.begin(115200);
}

void loop() {
  while (Serial.available() > 0) {
    Serial2.print((char)Serial.read());
  }
  while (Serial2.available() > 0) {
    Serial.print((char)Serial2.read());
  }
}


