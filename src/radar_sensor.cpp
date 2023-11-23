
#include <AsyncDelay.h>
#include "radar_sensor.h"
#include <ld2410.h>
#include "main.h"
#include "display.h"
#include "mqtt.h"

#define RXD1 18
#define TXD1 17

ld2410 radar;
bool engineeringMode = false;
String command;
uint32_t lastReading = 0;
bool radarConnected = false;

void setupRadar() {
  Serial1.begin (256000, SERIAL_8N1, RXD1, TXD1); //UART for monitoring the radar
  delay(500);
  Serial.print(F("\nLD2410 radar sensor initialising: "));
  if(radar.begin(Serial1))
  {
    Serial.println(F("OK"));
    Serial.print(F("LD2410 firmware version: "));
    Serial.print(radar.firmware_major_version);
    Serial.print('.');
    Serial.print(radar.firmware_minor_version);
    Serial.print('.');
    Serial.println(radar.firmware_bugfix_version, HEX);
  }
  else
  {
    Serial.println(F("not connected"));
  }
}

void loopRadar() {
  radar.read();
  if(radar.isConnected() && millis() - lastReading > 5000)  //Report every 1000ms
  {
    lastReading = millis();
    if(radar.presenceDetected())
    {
      setPresence(true);
      sendPresenceState(true);
      if(radar.stationaryTargetDetected())
      {
        Serial.print(F("Stationary target: "));
        Serial.print(radar.stationaryTargetDistance());
        Serial.print(F("cm "));
        sendPresenceStationary(radar.stationaryTargetDistance());
      }
      if(radar.movingTargetDetected())
      {
        Serial.print(F("Moving target: "));
        Serial.print(radar.movingTargetDistance());
        Serial.print(F("cm "));
        sendPresenceMoving(radar.movingTargetDistance());
      }
      if(radar.presenceDetected())
      {
        u_int16_t stationary = radar.stationaryTargetDistance();
        u_int16_t moving = radar.movingTargetDistance();
        Serial.println('-');
        Serial.print(F("Stationary target: "));
        Serial.print(radar.stationaryTargetDistance());
        Serial.print(F("cm "));
        Serial.print(F("Moving target: "));
        Serial.print(radar.movingTargetDistance());
        Serial.println(F("cm"));
        sendPresenceDistance(stationary, moving, true);
      }
      Serial.println();
    }
    else
    {
      setPresence(false);
      Serial.println(F("No target"));
      sendPresenceDistance(0, 0,  false);
      sendPresenceState(false);
    }
  }
}


