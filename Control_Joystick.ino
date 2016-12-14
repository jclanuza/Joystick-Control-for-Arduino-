#include <Servo.h>

Servo X;
Servo Y;

void setup() {
  X.attach(10);
  Y.attach(9);
}

void loop() {
  X.write(map(analogRead(A0),0,1023,0,180));
  Y.write(map(analogRead(A1),0,1023,0,180));
}
