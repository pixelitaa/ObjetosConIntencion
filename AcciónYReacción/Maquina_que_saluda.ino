// ejercicio 3.1: Sensor ultrasonico + servomotor
#include <Servo.h>

Servo miservo;
const int pinTrig = 13;
const int pinEcho = 12;
const int umbralSaludo = 20; // Distancia en cm para saludar

void setup() {
  Serial.begin(9600);
  miservo.attach(9);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  
  miservo.write(90); // Posición inicial (reposo)
}

void loop() {
  // Lógica de medición de distancia
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  long duracion = pulseIn(pinEcho, HIGH);
  int distancia = duracion * 0.034 / 2;

  if (distancia > 0 && distancia < umbralSaludo) {
    Serial.println("¡Hola! Detecto a alguien cerca.");
    
    // Gesto de saludo (va y vuelve 2 veces)
    for(int i = 0; i < 2; i++) {
      miservo.write(120);
      delay(200);
      miservo.write(60);
      delay(200);
    }
    miservo.write(90); // Vuelve al reposo
  }
  
  delay(100);
}
