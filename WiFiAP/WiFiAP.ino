#include <WiFi.h>

// Nom et mot de passe du point d'accès
const char *ssid = "ESP32-C6-AP";
const char *password = "12345678";

void setup() {
  Serial.begin(115200);

  // Démarrer le point d'accès
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("Point d'accès démarré avec l'adresse IP : ");
  Serial.println(IP);
}

void loop() {}
