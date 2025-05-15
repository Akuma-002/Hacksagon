#include <Wire.h>
#include <MPU9250_asukiaaa.h>

MPU9250_asukiaaa mySensor;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  mySensor.setWire(&Wire);
  mySensor.beginAccel();
  mySensor.beginGyro();
  mySensor.beginMag();

  Serial.println("MPU9250 Initialized");
}

void loop() {
  mySensor.accelUpdate();
  mySensor.gyroUpdate();
  mySensor.magUpdate();

  Serial.print("Accel: ");
  Serial.print(mySensor.accelX()); Serial.print(", ");
  Serial.print(mySensor.accelY()); Serial.print(", ");
  Serial.print(mySensor.accelZ());

  Serial.print(" | Gyro: ");
  Serial.print(mySensor.gyroX()); Serial.print(", ");
  Serial.print(mySensor.gyroY()); Serial.print(", ");
  Serial.print(mySensor.gyroZ());

  Serial.print(" | Mag: ");
  Serial.print(mySensor.magX()); Serial.print(", ");
  Serial.print(mySensor.magY()); Serial.print(", ");
  Serial.println(mySensor.magZ());

  delay(500);
}
