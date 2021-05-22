#include <Arduino.h>
#include <ServoMotor.h>
#include <Servo.h>

ServoMotor servo(9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.init();
}

void controlMotor() {
  servo.test();
}

int x, y;
void loop() {
  controlMotor();
}


void controlMotorWithJoystick() {
  x = analogRead(1);
  y = analogRead(2);

  Serial.println("x: ");
  Serial.print(x);
  Serial.println("y: ");
  Serial.print(y);
  Serial.println("----");

  if (x < 100) {
    servo.turnLeftBy(10);
    delay(100);
  } else if (x > 1000) {
    servo.turnRightBy(10);
    delay(100);
  } 
}