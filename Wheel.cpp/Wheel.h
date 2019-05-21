#ifndef Wheel_h
#define Wheel_h

#include "Arduino.h"

class Wheel
{
  public:
    Wheel(int pwm, int pin1, int pin2);
    void power(int pwr);
  private:
    int _pwm;
    int _pin1;
    int _pin2;
    int _pwr;
};

#endif
