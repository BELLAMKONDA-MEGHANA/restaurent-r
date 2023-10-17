
#define BLYNK_TEMPLATE_ID "TMPLZk3tDYwi"
#define BLYNK_DEVICE_NAME "AIML"
#define BLYNK_AUTH_TOKEN "jYA9-Bd8VB2yBQ_eOnV2jXL2-KZQJ_wT"

//link the libraries

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "#**#";//Enter your WIFI name
char pass[] = "connected";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D4, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  Serial.begin(9600);
  pinMode(D4, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library

Blynk.run();
Serial.println("Hello");
}