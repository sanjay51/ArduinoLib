#include "Joystick.h"
#include <ServoMotor.h>

JoystickDirection Joystick::getDirection() {
  int x = analogRead(_analogPinX);
  int y = analogRead(_analogPinY);

  // At middle, x and y stay at 502;
  if (x < 400) return LEFT;
  if (x > 600) return RIGHT;
  if (y < 400) return UP;
  if (y > 600) return DOWN;

  return CENTRE;
}

void Joystick::test(ServoMotor& servo) {
  switch (getDirection())
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