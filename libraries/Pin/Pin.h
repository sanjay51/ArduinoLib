#ifndef Pin_h
#define Pin_h

#include "Arduino.h"

class Pin {
  public:
    Pin(int pin);
    void high();
    void low();
    void get();

  private:
    int _pin;
};
#endif
