// Ejercicio 3.2: Sensor Piezoeléctrico + Led PWM

const int pinPiezo = A1; 
const int pinLed = 5; // Pin PWM

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // Leemos la vibración o impacto del piezo (0 a 1023)
  int vibracion = analogRead(pinPiezo);
  
  // Traducimos la intensidad del golpe al brillo del LED
  // Si el piezo es muy sensible, puedes ajustar el 1023 por un valor menor (ej. 500)
  int brillo = map(vibracion, 0, 1023, 0, 255);
  
  // Aseguramos que el brillo no se pase del rango 0-255
  brillo = constrain(brillo, 0, 255);

  // Aplicamos el brillo al LED
  analogWrite(pinLed, brillo);
  
  // Si hay una lectura significativa, la mostramos en el monitor
  if (vibracion > 10) { 
    Serial.print("Impacto detectado: ");
    Serial.print(vibracion);
    Serial.print(" -> Brillo LED: ");
    Serial.println(brillo);
  }
  
  delay(20); // Un delay corto para captar mejor los pulsos del piezo
}
