#include <avr/power.h> // must include

void setup() {
  clock_prescale_set(clock_div_1); // must include
  Serial.begin(19200); // kesişim baud
}

void loop() {
  Serial.println(analogRead(A3));
  delay(100);
}
