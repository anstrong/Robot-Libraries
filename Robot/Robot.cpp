#include "Arduino.h"
#include "Robot.h"

Robot::Robot(int l_pwm, int l_pin1, int l_pin2, int r_pwm, int r_pin1, int r_pin2)
{
  _l_pwm = l_pwm;
  _l_pin1 = l_pin1;
  _l_pin2 = l_pin2;
  _r_pwm = r_pwm;
  _r_pin1 = r_pin1;
  _r_pin2 = r_pin2;
}

void Robot::drive(int left_power, int right_power)
{
  Wheel leftWheel(_l_pwm, _l_pin1, _l_pin2);
  Wheel rightWheel(_r_pwm, _r_pin1, _r_pin2);

  _left_power = left_power;
  _right_power = right_power;

  if (_left_power > 250)
  {
    _left_power = 250;
  }
  if (_right_power > 250)
  {
    _right_power = 250;
  }
  _leftWheel.power(_left_power);
  _rightWheel.power(_right_power);
}

