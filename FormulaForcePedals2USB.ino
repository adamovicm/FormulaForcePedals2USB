#include <Joystick.h>

Joystick_ Joystick;

const int leftPedalPin = A1;
const int rightPedalPin = A2;
int leftPedal;
int rightPedal;
int rudder;

const bool initAutoSendState = true; 

void setup() {
  Joystick.begin();
}

void loop() {
  rudder = 510; // should be 512 by default but my pedals have deadzone issues
  leftPedal = analogRead(leftPedalPin);
  rightPedal = analogRead(rightPedalPin);
  
  rudder = rudder - map(leftPedal, 0, 1023, 0, 512) + map(rightPedal, 0, 1023, 0, 511);

  Joystick.setRzAxis(rudder);
  
  delay(50);
}
