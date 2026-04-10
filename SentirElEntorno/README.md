# Sentir el entorno
Los sensores no son solo piezas electrónicas; son traductores de fenómenos físicos (luz, distancia, tacto) a datos numéricos. En este módulo, aprenderemos a capturar la sutileza del mundo de los sensores y convertirla en una escala que el diseño pueda comprender, visualizar y manipular a su antojo.

## El Tacto del Hardware: Digital y Analógico
Para que nuestro diseño reaccione, primero debe entender qué tipo de información está recibiendo del mundo. No todos los fenómenos físicos se miden de la misma forma. Nuestro microcontrolador tiene entradas para dos tipos de sensores: digitales y analógicos.

**El mundo digital: Binario** Imagina un interruptor. ¿En qué estados puede estar un interruptor? 0 o 1. El mundo digital tiene estos dos estados cuyas sintaxis son HIGH o LOW, o bien true o false. No dejen que esta binariedad los engañe: toda computadora procesa toneladas de información codificando millones de combinaciones de estos ceros y unos a partir de la unidad básica que es el bit.

**El mundo analógico: Continuo** El mundo real es analógico: la luz no pasa de "noche" a "día" en un instante, tiene una transición. Una perilla o potenciómetro es un gran ejemplo, ya que al girarla, su posición altera en tiempo real su valor basado en la resistencia que este aplica respecto a la corriente que le proporciona nuestro microcontrolador. Este, para fines de código, tiene un valor entre 0 y 1023.

**Pinout** Este es el mapa de los pines de nuestro microcontrolador. Los pines son las entradas a las que podemos conectar distintos sensores que nos permiten darle a nuestro microcontrolador la capacidad de sentir su entorno y comunicarnos luego, mediante la comunicación serial, qué es lo que está sintiendo, ya sean datos binarios o analógicos.

<img width="729" height="600" alt="Arduino-UNO-R4-WiFi-Pinout" src="https://github.com/user-attachments/assets/a0f0968f-5656-4729-877f-b3fba816a19c" />

Recordando nuestro previo ejercicio, en estricto rigor, podemos pedirle que nos diga lo que nosotros indiquemos mediante Serial.print() respecto a la información sensada, por ejemplo:

int intensidadLuz = analogRead(A0);

if (intensidadLuz > 600) {
  Serial.println("Brilla brilla brilla");
} 
else {
  // ...si no se cumple la condición anterior:
  Serial.println("quién apagó la luz...");
}

## Esquemas de los ejercicios

**Sensor piezoeléctrico**

<img width="615" height="532" alt="Captura de pantalla 2026-04-10 113407" src="https://github.com/user-attachments/assets/3a654adc-e7f7-4f20-be15-5d79b4fe354a" />


**Sensor Ultrasónico**

<img width="713" height="680" alt="Captura de pantalla 2026-04-07 183708" src="https://github.com/user-attachments/assets/39e42941-4e23-4334-8349-5665ecf3053e" />

**Sensor fotosensible**

<img width="739" height="645" alt="Captura de pantalla 2026-04-07 183942" src="https://github.com/user-attachments/assets/5845d3b4-58d8-4d99-adad-e0c07ad058f6" />



**Ahora es tu turno!!! elige alguno de los ejercicio .ino de la carpeta y practicaremos conectar nuestro primer sensor y hacerlo interpretar información por nosotros**
