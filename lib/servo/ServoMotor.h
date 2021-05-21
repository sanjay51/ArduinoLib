#pragma once
#include "Arduino.h"
#include <Servo.h>

class ServoMotor {
  public:
    ServoMotor(int pin);
    void init();

    void turnLeft();
    void turnRight();
    void stop();
  private:
    int _pin;
    Servo _servo;
};