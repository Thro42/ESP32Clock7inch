// #include "globals.h"
#include <AsyncMqttClient.h>
#include <ArduinoJson.h>
#include "mqtt.h"
#include "main.h"
#include <WiFi.h>
#include "secrets.h"
#include "display.h"

extern "C" {
	#include "freertos/FreeRTOS.h"
	#include "freertos/timers.h"
}

TimerHandle_t mqttReconnectTimer;
bool mqttOnline;
char buffer[2048];
AsyncMqttClient mqttClient;
DynamicJsonDocument doc( 2048 ); // _INIT_N(((2048)));

void connectToMqtt() {
  Serial.println("Connecting to MQTT...");
  mqttClient.connect();
}

bool pub(const char *topic, uint8_t qos, bool retain, const char *payload, size_t length = 0, bool dup = false, uint16_t message_id = 0)
{
    for (int i = 0; i < 10; i++)
    {
        if (mqttClient.publish(topic, qos, retain, payload, length, dup, message_id))
            return true;
        delay(25);
    }
    return false;
}

void onMqttConnect(bool sessionPresent) {
  Serial.println("Connected to MQTT.");
  Serial.print("Session present: ");
  Serial.println(sessionPresent);
  mqttOnline = true;
  xTimerStop(mqttReconnectTimer, 0);
  mqttClient.subscribe(ALL_DATA_TOPIC, 0);
    
}

void onMqttDisconnect(AsyncMqttClientDisconnectReason reason) {
  mqttOnline = false;
  Serial.println("Disconnected from MQTT.");
  if (WiFi.isConnected()) {
    Serial.println("Start Timer.");
    xTimerStart(mqttReconnectTimer, 0);
  } else {
    Serial.println("Start Timer.");
    xTimerStart(mqttReconnectTimer, 100);
  }
}

void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total) {
  Serial.println("Publish received.");
  Serial.print("  topic: ");
  Serial.println(topic);
  deserializeJson(doc,payload);
  if(strcmp(topic,ALL_DATA_TOPIC) == 0)
  {
    String in_temp = doc["in_temp"];
    outInTemp( in_temp );
    String in_humidity = doc["in_humidity"];
    outInHumidity(in_humidity);
    String out_temp = doc["out_temp"];
    outOutTemp(out_temp);
    String time_in_brasil = doc["time_in_brasil"];
    outBrasilTime(time_in_brasil);
  }

}

void onMqttSubscribe(uint16_t packetId, uint8_t qos) {
  Serial.println("Subscribe acknowledged.");
  Serial.print("  packetId: ");
  Serial.println(packetId);
  Serial.print("  qos: ");
  Serial.println(qos);
}

void onMqttUnsubscribe(uint16_t packetId) {
  Serial.println("Unsubscribe acknowledged.");
  Serial.print("  packetId: ");
  Serial.println(packetId);
}

void setupMQTT()
{
  mqttOnline = false;
  mqttReconnectTimer = xTimerCreate("mqttTimer", pdMS_TO_TICKS(2000), pdFALSE, (void*)0, reinterpret_cast<TimerCallbackFunction_t>(connectToMqtt));

  mqttClient.onConnect(onMqttConnect);
  mqttClient.onDisconnect(onMqttDisconnect);
  mqttClient.onSubscribe(onMqttSubscribe);
  mqttClient.onUnsubscribe(onMqttUnsubscribe);
  mqttClient.onMessage(onMqttMessage);
//  mqttClient.onPublish(onMqttPublish);
  mqttClient.setClientId("Wohn_UhrID");
  mqttClient.setServer(MQTT_HOST, MQTT_PORT);
  mqttClient.connect();
}

void loopMQTT()
{

}

bool getMQTTState( void ) {
 return mqttOnline;
}

void sendPresenceStationary(u_int16_t distace) {
  char buff[10];
  sprintf(buff, "%d", distace);
  mqttClient.publish(STATIONARY_PRESENCE_TOPIC, 0, true, buff);
}

void sendPresenceMoving(u_int16_t distace) {
  char buff[10];
  sprintf(buff, "%d", distace);
  mqttClient.publish(MOVING_PRESENCE_TOPIC, 0, true, buff);
}
void sendPresenceState(boolean presence) {
  char buff[10];
  sprintf(buff, "%s", presence ? "true" : "false");
  mqttClient.publish(PRESENCE_PRESENCE_TOPIC, 0, true, buff);
}


void sendPresenceDistance(u_int16_t stationary, u_int16_t moving, boolean presence) {
  char buff[128];
  StaticJsonDocument<200> doc;
  doc["stationary"] = stationary;
  doc["moving"] = moving;
  doc["presence"] = presence;
  int b =serializeJson(doc, buff);
  Serial.print("bytes = ");
  Serial.println(b,DEC);
  mqttClient.publish(ALL_PRESENCE_TOPIC, 0, true, buff);
}