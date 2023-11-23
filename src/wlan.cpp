
#include <WiFi.h>
#include <WiFiClient.h>
#include "wlan.h"
#include "secrets.h"

const char* ssid = WIFI_SSID;
const char* password = WIFI_PASSWORD;
const char* deviceName = WIFI_DEVICENAME;
const char* hostname = WIFI_HOSTNAME;
#ifdef LOCAL_IP
// Set your Static IP address
IPAddress local_IP(LOCAL_IP);
// Set your Gateway IP address
IPAddress gateway(GATEWAY_IP);

IPAddress subnet(SUPNET_IP);
IPAddress primaryDNS(PIMARY_DNS_IP);   //optional
#ifdef SECONDARY_DNS_IP
IPAddress secondaryDNS(SECONDARY_DNS_IP); //optional
#endif // SECONDARY_DNS_IP
#endif // LOCAL_IP

void setupWifi() {
#ifdef LOCAL_IP
 // Configures static IP address
#ifdef SECONDARY_DNS_IP
  if (!WiFi.config(local_IP, gateway, subnet, primaryDNS, secondaryDNS)) {
#else
  if (!WiFi.config(local_IP, gateway, subnet, primaryDNS)) {
#endif // SECONDARY_DNS_IP
    Serial.println("STA Failed to configure");
  }
#endif // LOCAL_IP
  WiFi.hostname(hostname);      // DHCP Hostname (useful for finding device for static lease)
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(300);
  }
  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    delay(300);
  }
}