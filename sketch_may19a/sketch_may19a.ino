#include <Pin.h>

Pin pin(9);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int i = 0;
void loop() {
  i++;
  
  Serial.println(i);
  pin.high();
  delay(1000);

  pin.low();
  delay(1000);
}
