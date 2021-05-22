#include <Arduino.h>
#include <ServoMotor.h>
#include <Joystick.h>

ServoMotor servo(9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.init();
}


Joystick joystick(1, 2);
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
