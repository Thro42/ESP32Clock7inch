#ifndef SECRETS_H
#define SECRETS_H
#include <Arduino.h>

#define WIFI_SSID "SSID"
#define WIFI_PASSWORD "42"
#define WIFI_DEVICENAME "CLOCK"
#define WIFI_HOSTNAME "CLOCK"

//#define LOCAL_IP 192, 168, 1, 10
#define GATEWAY_IP 192, 168, 1, 1
#define SUPNET_IP 255, 255, 255, 0
#define PIMARY_DNS_IP 192, 168, 1, 1
//#define SECONDARY_DNS_IP 192, 168, 1, 1

#define MQTT_HOST IPAddress(192, 168, 1, 1)
#define MQTT_PORT 1883

#endif // SECRETS_H
