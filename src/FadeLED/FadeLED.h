#ifndef __FADELED_H
#define __FADELED_H

class FadeLED
{
private:
  int _redPin;
  int _greenPin;
  int _bluePin;
  int _redPinIntensity;
  int _greenPinIntensity;
  int _bluePinIntensity;

public:
  FadeLED(int redPin, int greenPin, int bluePin);

  void setColor(int red, int green, int blue);
};

#endif
