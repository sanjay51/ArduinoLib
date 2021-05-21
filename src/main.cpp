#include <Arduino.h>
#include <ServoMotor.h>
#include <Servo.h>

ServoMotor servo(9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.init();
}

int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello");
  if (i == 0) {
    servo.turnLeft();
  //servo.write(180);
  delay(2000);
  servo.turnRight();
  //servo.write(0);
  delay(2000);
  }
  i = 0;
}