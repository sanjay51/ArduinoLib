#include "ServoMotor.h"
#include <Servo.h>

ServoMotor::ServoMotor(int pin):_pin(pin) {
  
}

void ServoMotor::init() {
  _servo.attach(_pin);
}

void ServoMotor::turnLeft() {
  _servo.write(180);
}

void ServoMotor::turnRight() {
  _servo.write(0);
}

void ServoMotor::stop() {
  _servo.write(90);
}
