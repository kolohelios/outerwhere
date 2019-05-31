#include "Arduino.h"
#include "FadeLED.h"

// LED constructor
FadeLED::FadeLED(int redPin, int greenPin, int bluePin)
{
  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
}
