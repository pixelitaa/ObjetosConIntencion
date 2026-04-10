// Ejercicio 2.2: El Sensor Piezoeléctrico
const int pinPiezo = A3;
int umbralVibracion = 50; // Umbral de sensibilidad para detectar el golpe

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Leemos el voltaje generado por el impacto en el piezo
  int vibracion = analogRead(pinPiezo);
  
  if (vibracion > umbralVibracion) {
    // Si el impacto supera el umbral, se activa el mensaje
    Serial.print("Vibración: ");
    Serial.print(vibracion);
    Serial.println(" -> ESTADO: AAAAAAAA ME DUELEEEEEE");
    
    // Un pequeño delay extra aquí ayuda a que no se repita el grito 
    // demasiadas veces por un solo golpe físico
    delay(100); 
  } else {
    Serial.println("ESTADO: estoy tan solo....");
  }
  
  delay(100); // Frecuencia de muestreo
}
