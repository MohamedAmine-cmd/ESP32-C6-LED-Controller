/*
 * Ce code montre le fonctionnement de la LED intégrée à l'ESP32-C6
 */
 
void setup() {
  pinMode(RGB_BUILTIN, OUTPUT);
  digitalWrite(RGB_BUILTIN, LOW);
  delay(1000);
}

void loop() {
  digitalWrite(RGB_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(RGB_BUILTIN, LOW);
  delay(1000);
}
