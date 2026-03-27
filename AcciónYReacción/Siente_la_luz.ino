//ejercicio 3.2: Sensor de presion + Led PWM
const int pinPresion = A1;
const int pinLed = 5; // Importante: debe ser un pin con PWM (como el 3, 5, 6, 9, 10, 11)

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  int fuerza = analogRead(pinPresion);
  
  // MAPEO: Traducimos la fuerza (0-1023) al brillo del LED (0-255)
  int brillo = map(fuerza, 0, 1023, 0, 255);
  
  // Enviamos la intensidad al LED
  analogWrite(pinLed, brillo);
  
  Serial.print("Fuerza detectada: ");
  Serial.print(fuerza);
  Serial.print(" -> Brillo LED: ");
  Serial.println(brillo);
  
  delay(30); // Pausa mínima para suavizar la respuesta
}
