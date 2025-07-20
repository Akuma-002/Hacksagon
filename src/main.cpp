#include<Arduino.h>
#include <Wire.h>
#include <MPU9250.h>

MPU9250 IMU (Wire, 0x68);

void setup(){
  Serial.begin(9600);
  IMU.begin();
}
void loop(){
  IMU.readSensor();
  
}