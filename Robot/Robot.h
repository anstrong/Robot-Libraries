#ifndef Robot_h
#define Robot_h

#include "Arduino.h"
#include "Wheel.h"

class Robot
{
  public:
	Robot(int l_pwm, int l_pin1, int l_pin2, int r_pwm, int r_pin1, int r_pin2);
	void drive(int left_power, int right_power);
  private:
    int _l_pwm;
    int _l_pin1;
    int _l_pin2;
    int _r_pwm;
    int _r_pin1;
    int _r_pin2;
    int _left_power;
    int _right_power;
};

#endif
