#include "Arduino.h"
#include "Pin.h"

Pin::Pin(int pin) {
  _pin = pin;
}

void Pin::high() {
  digitalWrite(_pin, HIGH);
}

void Pin::low() {
  digitalWrite(_pin, LOW);
}
