#include "src/FadeLED/FadeLED.h"
#include "Arduino.h"

FadeLED led(D5, D7, D6, false);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  led.setColor(0, 0, 5);
  led.turnOn();
  delay(5000);
  led.turnOff();
  delay(5000);
  led.setColor(5, 0, 0);
  led.turnOn();
  delay(5000);
  led.turnOff();
  delay(5000);
  led.setColor(0, 10, 0);
  led.turnOn();
  delay(5000);
  led.turnOff();
}
