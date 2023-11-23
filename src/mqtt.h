
#ifndef MQTT_H
#define MQTT_H

#include <Arduino.h>

#define ALL_DATA_TOPIC "uhrwohnen/data"
#define ALL_PRESENCE_TOPIC "uhrwohnen/presence"
#define STATIONARY_PRESENCE_TOPIC "uhrwohnen/presence/stationary"
#define MOVING_PRESENCE_TOPIC "uhrwohnen/presence/moving"
#define PRESENCE_PRESENCE_TOPIC "uhrwohnen/presence/presence"

void setupMQTT();
void loopMQTT();
bool getMQTTState();

void sendPresenceState(boolean presence);
void sendPresenceStationary(u_int16_t distace);
void sendPresenceMoving(u_int16_t distace);
void sendPresenceDistance(u_int16_t stationary, u_int16_t moving, boolean presence);

#endif /*MQTT_H*/
