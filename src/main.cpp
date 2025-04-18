#include <ESPStepperMotorServer.h>
#include "config.h"

ESPStepperMotorServer *stepperMotorServer;

void setup()
{
  Serial.begin(115200);
  stepperMotorServer = new ESPStepperMotorServer(ESPServerRestApiEnabled | ESPServerWebserverEnabled | ESPServerSerialEnabled);
  stepperMotorServer->setWifiCredentials(WIFI_SSID, WIFI_PASSWORD);
  stepperMotorServer->setWifiMode(ESPServerWifiModeClient); // start the server as a wifi client (DHCP client of an existing wifi network)
  // WiFi.setHostname("window-puller");

  stepperMotorServer->start();
}

void loop()
{
}
