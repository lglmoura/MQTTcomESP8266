#include "config.h"
#include "wifi_init.h"
#include "mqtt_init.h"

void setup() {
  Serial.begin(115200);
  delay(10);
  if (conectaWiFi()){
     iniciaMQTT();
     
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED){
      if (!MQTTClient.connected()) {
        connectaClienteMQTT();
      }
     
      MQTTClient.loop(); 
  }else{
     if (conectaWiFi()){
     iniciaMQTT();
     }   
      
  }
}
