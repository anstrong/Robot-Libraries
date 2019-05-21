#include "Arduino.h"
#include "Wheel.h"

Wheel::Wheel(int pwm, int pin1, int pin2)
{
  pinMode(pwm, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);

  _pwm = pwm;
  _pin1 = pin1;
  _pin2 = pin2;
}

void Wheel::power(int pwr)
{
  _pwr = pwr;
  digitalWrite(_pin1, HIGH);
  digitalWrite(_pin2, LOW);
  analogWrite(_pwm, _pwr); 
}
