#include "Joystick.h"

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