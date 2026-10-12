#include <Arduino.h>
#include <math.h>
void initLed()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
void led(int velocidad)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(velocidad);
  digitalWrite(LED_BUILTIN, LOW);
  delay(velocidad);
}
void setup()
{
  
}

void loop()
{
}