#include <Arduino.h>
int r1 = 7;
int r2 = 8;
int r3 = 9;
int r4 = 10;


void setup() {
  pinMode(r1, OUTPUT);
  digitalWrite(r1, HIGH);
  pinMode(r2, OUTPUT);
  digitalWrite(r2, HIGH);
  pinMode(r3, OUTPUT);
  digitalWrite(r3, HIGH);
  pinMode(r4, OUTPUT);
  digitalWrite(r4, HIGH);
}

void loop() {
  digitalWrite(r1, LOW);
  delay(2000);
  digitalWrite(r2, LOW);
  delay(2000);
  digitalWrite(r3, LOW);
  delay(2000);
  digitalWrite(r4, LOW);
  delay(4000);
  digitalWrite(r1, HIGH);
  delay(2000);
  digitalWrite(r2, HIGH);
  delay(2000);
  digitalWrite(r3, HIGH);
  delay(2000);
  digitalWrite(r4, HIGH);




}
