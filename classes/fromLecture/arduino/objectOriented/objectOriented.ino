#include "Morse.h"
#include "Morse.cpp"
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Morse sosSignal(13);
  sosSignal.dot();
  sosSignal.dot();
  sosSignal.dot();
  sosSignal.dash();
  sosSignal.dash();
  sosSignal.dash();
  sosSignal.dot();
  sosSignal.dot();
  sosSignal.dot();

  delay(3000);
}
