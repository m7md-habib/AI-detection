#include "HUSKYLENS.h"

HUSKYLENS huskylens;
const int ledPin = 7;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  
  Wire.begin();
  while (!huskylens.begin(Wire)) {
    Serial.println(F("HuskyLens connection failed! Check I2C settings and wiring."));
    delay(100);
  }
  huskylens.writeAlgorithm(ALGORITHM_FACE_RECOGNITION);
}

void loop() {
  if (!huskylens.request()) {
    Serial.println(F("Failed to request data from HuskyLens!"));
  } else if (!huskylens.isLearned()) {
    Serial.println(F("No faces learned. Please train a face with ID 1."));
  } else if (huskylens.available()) {
    HUSKYLENSResult result = huskylens.read();
    if (result.command == COMMAND_RETURN_BLOCK && result.ID == 1) {
      digitalWrite(ledPin, HIGH);
      Serial.println(F("Face ID 1 detected! LED ON"));
    } else {
      digitalWrite(ledPin, LOW);
      Serial.println(F("Face ID 1 not detected. LED OFF"));
    }
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println(F("No face detected. LED OFF"));
  }
  delay(100);
}