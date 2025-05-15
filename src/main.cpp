#include <Arduino.h>
int r1 = 7;
int r2 = 8;
int r3 = 9;
int r4 = 10;


void setup() {
  pinMode(r1, OUTPUT);
  digitalWrite(r1, HIGH);
}

void loop() {
  digitalWrite(7, HIGH);
  delay(2000);;
  digitalWrite(7, LOW);
  delay(2000);

}
