#include <WiFi.h>

const char* ap_ssid = "raj";
const char* ap_password = "12345678";  // minimum 8 characters

void setup() {
  Serial.begin(115200);

  WiFi.softAP(ap_ssid, ap_password);

  Serial.println("SoftAP Started");
  Serial.print("AP SSID: ");
  Serial.println(ap_ssid);

  Serial.print("ESP32 AP IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
}