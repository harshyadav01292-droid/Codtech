#include <Arduino.h>

const int PIR_PIN = 13;
const int LED_PIN = 4;

bool motionDetected = false;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.println("Motion Detection System Started");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH && !motionDetected) {
    Serial.println("Motion Detected!");
    digitalWrite(LED_PIN, HIGH);
    motionDetected = true;
  }

  if (motion == LOW && motionDetected) {
    Serial.println("No Motion");
    digitalWrite(LED_PIN, LOW);
    motionDetected = false;
  }

  delay(100);
}