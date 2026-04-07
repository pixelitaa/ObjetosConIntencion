// Ejercicio 2.2: El Sensor de Presión
const int pinPresion = A3;
int umbralFuerza = 100; // Sensibilidad del toque, valor entre 0 y 1024 la sensibilidad de este es muy variable dependiendo del sensor.

void setup() {
  Serial.begin(9600);
}

void loop() {
  int fuerza = analogRead(pinPresion);
  
  if (fuerza > umbralFuerza) {
    Serial.println("ESTADO: AAAAAAAA ME DUELEEEEEE");
  } else {
    Serial.println("ESTADO: estoy tan solo....");
  }
  delay(200);
}
