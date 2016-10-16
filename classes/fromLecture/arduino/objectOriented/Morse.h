/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin){
      pinMode(pin, OUTPUT);
      _pin = pin;
    }
    void dot(){
      digitalWrite(_pin, HIGH);
      delay(250);
      digitalWrite(_pin, LOW);
      delay(250);
    }
    void dash(){
      digitalWrite(_pin, HIGH);
      delay(1000);
      digitalWrite(_pin, LOW);
      delay(250);

    }
  private:
    int _pin;
};

#endif
