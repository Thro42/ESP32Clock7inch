#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <time.h>                   // time() ctime(
#include <AsyncDelay.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

#include "wlan.h"
#include "display.h"
#include "mqtt.h"
#include "radar_sensor.h"
#include "ota.h"

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 3600 * 1;
const int   daylightOffset_sec = 3600 * 0;

void setup() {
  Serial.begin(115200);
  Serial.println("LVGL Widgets Demo");

 // We configure the NTP server
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);

// Setup WiFi
  setupWifi();
// Setup Display
  setupDisplay();
// Setup MQTT
  setupMQTT();

  setupRadar();
  setupOTA();

}

void loop() {
  loopMQTT();
  loopRadar();
  loopOTA();
  loopDisplay();
}

