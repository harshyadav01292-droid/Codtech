#include <Arduino.h>
#include <ESP32Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 18
#define SERVO_PIN 13

Servo sanitizerServo;

// Function to measure distance
float getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in cm
  float distance = duration * 0.0343 / 2;

  return distance;
}

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  sanitizerServo.attach(SERVO_PIN);
  sanitizerServo.write(0); // Initial position

  Serial.println("Automatic Sanitizer Dispenser Started");
}

void loop() {
  float distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Detect hand within 10 cm
  if (distance > 0 && distance < 10) {

    Serial.println("Hand Detected!");
    Serial.println("Dispensing Sanitizer...");

    // Press the pump
    sanitizerServo.write(90);
    delay(1000);

    // Return to original position
    sanitizerServo.write(0);
    delay(1500); // Prevent repeated dispensing
  }

  delay(200);
}