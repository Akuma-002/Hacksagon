#include<Arduino.h>
#include <Wire.h>
#include <MPU9250.h>

#define LED_PIN 13

MPU9250 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  pinMode(LED_PIN, OUTPUT);

  // Initialize MPU9250
  if (!mpu.setup(0x68)) {  // change to 0x69 if your AD0 pin is high
    Serial.println("MPU9250 connection failed!");
    while (1);
  }
}

void loop() {
  if (mpu.update()) {
    float ax = mpu.getAccX(); // acceleration in g (gravity)
    Serial.print("AccX: ");
    Serial.println(ax);

    // Adjust threshold as needed; positive X means right tilt if sensor is flat
    if (ax > 0.3) { // 0.3g threshold, tune as needed
      digitalWrite(LED_PIN, HIGH);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
  }
  delay(50);
}
