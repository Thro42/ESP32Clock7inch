
#ifndef MQTT_H
#define MQTT_H

#include <Arduino.h>

#define ALL_DATA_TOPIC "uhrwohnen/data"

void setupMQTT();
void loopMQTT();
bool getMQTTState();

#endif /*MQTT_H*/
