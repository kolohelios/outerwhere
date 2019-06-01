#include "WiFiConnectivity.h"
#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

WiFiConnectivity::WiFiConnectivity(const char *ssid, const char *passphrase)
{
  Serial.println();
  Serial.println();
  Serial.println();

  for (uint8_t t = 4; t > 0; t--)
  {
    Serial.printf("[SETUP] WAIT %d...\n", t);
    Serial.flush();
    delay(1000);
  }

  ESP8266WiFiMulti _wiFiMulti;
  WiFi.mode(WIFI_STA);
  _wiFiMulti.addAP(ssid, passphrase);
}
