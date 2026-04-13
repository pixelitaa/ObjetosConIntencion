// Ejercicio 3.2: Fotoresistor (LDR) + Led PWM + Buzzer
// La intensidad de la luz controla el brillo del LED y el tono del Buzzer

const int pinLDR = A1;    // Pin donde conectamos el divisor de tensión del LDR
const int pinLed = 5;     // Pin PWM para el LED
const int pinBuzzer = 9;  // Pin para el Buzzer (preferiblemente PWM o digital)

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  // Leemos la cantidad de luz (0 a 1023)
  int nivelLuz = analogRead(pinLDR);
  
  // 1. Traducimos la luz al brillo del LED (0-255)
  int brillo = map(nivelLuz, 0, 1023, 0, 255);
  brillo = constrain(brillo, 0, 255);
  analogWrite(pinLed, brillo);

  // 2. Traducimos la luz a una frecuencia para el Buzzer (ej. 200Hz a 2000Hz)
  // Si quieres que a más luz suene más agudo, usa estos valores:
  int frecuencia = map(nivelLuz, 0, 1023, 200, 2000);
  
  // Si hay suficiente luz, hacemos sonar el buzzer
  if (nivelLuz > 50) { 
    tone(pinBuzzer, frecuencia);
    
    // Mostramos datos en el monitor serial
    Serial.print("Luz detectada: ");
    Serial.print(nivelLuz);
    Serial.print(" -> Frecuencia: ");
    Serial.println(frecuencia);
  } else {
    // Si está muy oscuro, silenciamos el buzzer
    noTone(pinBuzzer);
  }
  
  delay(50); // Un delay pequeño para estabilidad
}
