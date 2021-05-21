#pragma once
#include "Arduino.h"
#include <Servo.h>

class ServoMotor {
  public:
    ServoMotor(int pin);
    void init();

    void turnLeft();
    void turnRight();
    void turnMiddle();
    void turnLeftBy(int angle);
    void turnRightBy(int angle);
  private:
    int _pin;
    Servo _servo;

    int _currentAngle = 0;
};