#include<Arduino.h>
int sensorPin = A0; // AO pin connected to A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read analog value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  delay(500); // Small delay for readability
}
