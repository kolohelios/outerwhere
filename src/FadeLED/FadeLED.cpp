#include "Arduino.h"
#include "FadeLED.h"

// LED constructor
FadeLED::FadeLED(int redPin, int greenPin, int bluePin, bool isCathode)
{
  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
  _isCathode = isCathode;
  pinMode(_redPin, OUTPUT);
  pinMode(_greenPin, OUTPUT);
  pinMode(_bluePin, OUTPUT);
}

void FadeLED::setColor(int red, int green, int blue)
{
  _redPinIntensity = _isCathode ? red : _brightness - red;
  _greenPinIntensity = _isCathode ? green : _brightness - green;
  _bluePinIntensity = _isCathode ? blue : _brightness - blue;
}

void FadeLED::turnOn()
{
  analogWrite(_redPin, _redPinIntensity);
  analogWrite(_greenPin, _greenPinIntensity);
  analogWrite(_bluePin, _bluePinIntensity);
}

void FadeLED::turnOff()
{
  analogWrite(_redPin, _isCathode ? 0 : _brightness);
  analogWrite(_greenPin, _isCathode ? 0 : _brightness);
  analogWrite(_bluePin, _isCathode ? 0 : _brightness);
}
