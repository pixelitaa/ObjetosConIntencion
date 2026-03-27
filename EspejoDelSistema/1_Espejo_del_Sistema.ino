
// EJERCICIO 01: El Espejo del Sistema

// Este código establece el primer canal de comunicación entre el 
// microcontrolador y tú a través del Monitor Serial.
 

// Se ejecuta una sola vez al encender o resetear
void setup() {
  // Abrimos el canal de comunicación a una velocidad de 9600 baudios, es como sintonizar una frecuencia.
  Serial.begin(9600);

  // Enviamos un mensaje de bienvenida para confirmar que el "cerebro" despertó.
  Serial.println("--- Sistema Iniciado ---");
  Serial.println("Hola, soy tu microcontrolador y estoy listo para diseñar.");
}

// 2. Se ejecuta una y otra vez, infinitamente
void loop() {
  // Le pedimos al microcontrolador que nos diga que está "vivo" cada segundo.
  Serial.println("Latido del sistema... procesando lógica.");

  // Hacemos una pausa de 1000 milisegundos (1 segundo) para que el texto
  // no pase demasiado rápido y podamos leerlo con calma.
  delay(1000); 
}
