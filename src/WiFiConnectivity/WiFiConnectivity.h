#ifndef __WIFICONNECTIVITY_H
#define __WIFICONNECTIVITY_H

#include <ESP8266WiFiMulti.h>

class WiFiConnectivity
{
private:
  ESP8266WiFiMulti _wiFiMulti;

public:
  WiFiConnectivity(const char *ssid, const char *passphrase);
};

#endif
