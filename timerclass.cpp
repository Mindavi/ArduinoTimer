#include "timerclass.h"
#include <Arduino.h>

IntervalTimer::IntervalTimer(unsigned int intervalMilli) 
{
  this->intervalMillis = intervalMilli;
  this->currentMillis = millis();
  this->previousMillis = 0;
}

bool IntervalTimer::timeOver() 
{
  this->currentMillis = millis();
  if (this->currentMillis - this->previousMillis >= this->intervalMillis) {
    this->previousMillis = this->currentMillis;
    return true;
  }
  return false;
}

void IntervalTimer::reset()
{
  this->previousMillis = millis();
}

