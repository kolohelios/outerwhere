#ifndef __FADELED_H
#define __FADELED_H

class FadeLED
{
private:
  const int _brightness = 1023;
  const int _fadeAmount = 16;
  int _redPin;
  int _greenPin;
  int _bluePin;
  int _redPinIntensity;
  int _greenPinIntensity;
  int _bluePinIntensity;
  bool _isCathode;

public:
  FadeLED(int redPin, int greenPin, int bluePin, bool isCathode);

  void setColor(int red, int green, int blue);
  void turnOn();
  void turnOff();
};

#endif
