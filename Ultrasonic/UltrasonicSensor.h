#ifndef UltrasonicSensor_h
#define UltrasonicSensor_h

#include "Arduino.h"
#include <NewPing.h>

class UltrasonicSensor
{
  public:
    UltrasonicSensor(int trigger, int echo, int range);
    int detectObject(int distance);
  private:
    int _trigger;
    int _echo;
    int _range;
    int _distance;
};

#endif