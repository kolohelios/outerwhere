#include "src/FadeLED/FadeLED.h"
#include "src/WiFiConnectivity/WiFiConnectivity.h"
#include "src/TaskScheduler/src/TaskScheduler.h"
#include "Arduino.h"
#include "arduino_secrets.h"

FadeLED led(D5, D7, D6, false);
WiFiConnectivity wifiConnectivity(SECRET_SSID, SECRET_PASSPHRASE);

// Callback methods prototypes
void t1Callback();
void t2Callback();
void t3Callback();

// Tasks
Task t4();
Task t1(3000, TASK_FOREVER, &t1Callback);
Task t2(6000, TASK_FOREVER, &t2Callback);
Task t3(9000, TASK_FOREVER, &t3Callback);

Scheduler runner;

void t1Callback()
{
  Serial.print("blue");
  led.setColor(0, 0, 5);
  led.turnOn();
}

void t2Callback()
{
  Serial.print("red");
  led.setColor(10, 0, 0);
  led.turnOn();
}

void t3Callback()
{
  Serial.print("green");
  led.setColor(0, 10, 0);
  led.turnOn();
}

void setup()
{
  Serial.begin(115200);
  Serial.println("Scheduler TEST");

  runner.init();
  Serial.println("Initialized scheduler");

  runner.addTask(t1);
  Serial.println("added t1");

  runner.addTask(t2);
  Serial.println("added t2");

  runner.addTask(t3);
  Serial.println("added t3");

  t1.enable();
  Serial.println("Enabled t1");
  t2.enable();
  Serial.println("Enabled t2");
  t3.enable();
  Serial.println("Enabled t3");
}

void loop()
{
  runner.execute();
}
