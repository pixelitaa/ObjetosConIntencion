// Ejercicio 2.3: El Sensor de Distancia (Ultrasonido)
const int pinTrig = 13;
const int pinEcho = 12;
int umbralCercania = 30; // Distancia en centímetros a la que quieres que funcione el sensor

void setup() {
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
}

void loop() {
  // Lógica para disparar el sonido y medir el rebote
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  
  long duracion = pulseIn(pinEcho, HIGH);
  int distancia = duracion * 0.034 / 2; // Conversión a cm

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia < umbralCercania) {
    Serial.println("ESTADO: He detectado un alumno del taller invita2 :) ");
  } else {
    Serial.println("ESTADO: mmm no hay andie por aqui...");
  }
  delay(500);
}
