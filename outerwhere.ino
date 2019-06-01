#include "src/FadeLED/FadeLED.h"
#include "Arduino.h"

FadeLED led(D5, D6, D7);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  led.setColor(0, 0, 255);
}
