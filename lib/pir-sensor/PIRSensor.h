#pragma once
#include <Arduino.h>

/**
 * Module: HC-SR501
 * 
 * == Pins ==
 * 1 - GND, 
 * 2 - INPUT(DIGITAL), 
 * 3 - VCC(5V)
 */
class PIRSensor {
  public:
    PIRSensor(int pin):_pin(pin) {}
    void init() {
        pinMode(_pin, INPUT);
    }
    boolean isMotionDetected() {
        return digitalRead(_pin) == 1;
    }

  private:
    int _pin;
};