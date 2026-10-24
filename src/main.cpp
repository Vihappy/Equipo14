#include <Arduino.h>

// --- DEFINICIÓN DE PINES ---
#define PIN_IN3 26
#define PIN_IN4 27

void setup() {
  // Configurar los pines como salida
  pinMode(PIN_IN3, OUTPUT);
  pinMode(PIN_IN4, OUTPUT);

  // Asegurarnos de que el motor inicie apagado
  digitalWrite(PIN_IN3, LOW);
  digitalWrite(PIN_IN4, LOW);
}

void loop() {
  // 1. GIRAR EN UNA DIRECCIÓN (ej. Adelante)
  digitalWrite(PIN_IN3, HIGH);
  digitalWrite(PIN_IN4, LOW);
  delay(3000); // Mantener por 3 segundos

  // 2. FRENAR EL MOTOR (Pausa de seguridad)
  digitalWrite(PIN_IN3, LOW);
  digitalWrite(PIN_IN4, LOW);
  delay(1000); // Detenido por 1 segundo

  // 3. GIRAR EN LA DIRECCIÓN CONTRARIA (ej. Atrás)
  digitalWrite(PIN_IN3, LOW);
  digitalWrite(PIN_IN4, HIGH);
  delay(3000); // Mantener por 3 segundos

  // 4. FRENAR EL MOTOR
  digitalWrite(PIN_IN3, LOW);
  digitalWrite(PIN_IN4, LOW);
  delay(1000); // Detenido por 1 segundo antes de repetir el ciclo
}