#pragma once
#include <Arduino.h>
#include <ServoMotor.h>

enum JoystickDirection {
    LEFT, RIGHT, UP, DOWN, CENTRE
};

class Joystick {
  public:
    Joystick(int analogPinX, int analogPinY):_analogPinX(analogPinX), _analogPinY(analogPinY) {
    }

    JoystickDirection getDirection();
    void test(ServoMotor& servo);

  private:
    int _analogPinX;
    int _analogPinY;
};