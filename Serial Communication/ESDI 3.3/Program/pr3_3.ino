#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  Serial.println("Send data...");
  mySerial.begin(9600);
  mySerial.println("Receiving...");
}

void loop() {
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}

