#pragma once
#include <Arduino.h>
#include <Pin.h>

enum JoystickDirection {
    LEFT, RIGHT, UP, DOWN
};

class Joystick {
  public:
    Joystick(int analogPinX, int analogPinY):_analogPinX(analogPinX), _analogPinY(analogPinY) {
    }

    JoystickDirection getDirection();
  private:
    int _analogPinX;
    int _analogPinY;
};