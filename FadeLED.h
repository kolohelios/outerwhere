#ifndef __FADELED_H
#define __FADELED_H

class FadeLED
{
private:
  int _redPin;
  int _greenPin;
  int _bluePin;

public:
  FadeLED(int redPin, int greenPin, int bluePin);
};

#endif
