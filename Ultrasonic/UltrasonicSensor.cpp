#include "Arduino.h"
#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin, int maxRange)
{
  _trigger = triggerPin;
  _echo = echoPin;
  _range = maxRange;
  
  NewPing sonar(_trigger, _echo, _range);
}

int UltrasonicSensor::getObject(int distance)
{
  _distance = distance;
  int reading = sonar.ping_cm();

  if (reading > 0 && reading <= _distance)
  {
    return reading;
  }
  else
  {
    return range + 1;
  }
}
