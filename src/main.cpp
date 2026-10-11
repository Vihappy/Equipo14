#include <Arduino.h>
void led(int velocidad)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(velocidad);
  digitalWrite(LED_BUILTIN, LOW);
  delay(velocidad);
}
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  led(100);
  led(1000);
  led(500);
}