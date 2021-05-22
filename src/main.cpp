#include <Arduino.h>
#include <ServoMotor.h>
#include <Joystick.h>

ServoMotor servo(9);
Joystick joystick(1, 2);

void setup() {
  Serial.begin(9600);
  servo.init();
}

void loop() {
  switch (joystick.getDirection())
  {
  case LEFT:
    servo.turnLeft();
    break;
  
  case RIGHT:
    servo.turnRight();
    break;

  case UP:
    servo.turnMiddle();
    break;

  default:
    break;
  }
}
