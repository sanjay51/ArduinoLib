#include "ServoMotor.h"
#include <Servo.h>

ServoMotor::ServoMotor(int pin):_pin(pin) {
  
}

void ServoMotor::init() {
  _servo.attach(_pin);
}

void ServoMotor::turnLeft() {
  _servo.write(180);
  _currentAngle = 180;
}

void ServoMotor::turnRight() {
  _servo.write(0);
  _currentAngle = 0;
}

void ServoMotor::turnMiddle() {
  _servo.write(90);
  _currentAngle = 90;
}

void ServoMotor::turnLeftBy(int angle) {
  if (_currentAngle == 180) return;
  _currentAngle += angle;
  if (_currentAngle > 180) {
    _currentAngle = 180;
  }

  _servo.write(_currentAngle);
}

void ServoMotor::turnRightBy(int angle) {
  if (_currentAngle == 0) return;
  _currentAngle -= angle;
  if (_currentAngle < 0) {
    _currentAngle = 0;
  }

  _servo.write(_currentAngle);
}
