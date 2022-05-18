#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <Simplepush.h>

ESP8266WiFiMulti WiFiMulti;
Simplepush simple;

void setup() {
  // Connect ESP8266 to WiFi
  WiFiMulti.addAP("YourWifiSSID", "WifiPassword");

  if((WiFiMulti.run() == WL_CONNECTED)) {
    // Send unencrypted notification
    simple.send("YourSimplepushKey", "Wow", "This is so easy", "Event");

    // Send encrypted notification
    simple.sendEncrypted("YourSimplepushKey", "password", "salt", "Wow", "This is so secure.", "Event");
  }
}
