#include <Arduino.h>
#include <Pin.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

Pin pin(9);
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello");
  pin.high();
  delay(1000);
  pin.low();
  delay(1000);
}