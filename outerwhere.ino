#include "FadeLED.h"
#include "Arduino.h"

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  FadeLED led(D5, D6, D7);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
