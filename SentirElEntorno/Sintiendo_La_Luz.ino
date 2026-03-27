// Ejercicio 2.1: El Sensor de Luz
const int pinLuz = A0; 
int umbralLuz = 500; // Tú decides qué es "oscuro" tiene que ser un valor entre 0 y 1023

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(pinLuz);
  Serial.print("Nivel de luz: ");
  Serial.println(valor);

  if (valor < umbralLuz) {
    Serial.println("ESTADO: Quien apago la luz...");
  } else {
    Serial.println("ESTADO: Brilla weona brilla!!!!!");
  }
  delay(500); //espera medio segundo
}
