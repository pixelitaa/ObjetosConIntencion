# El Espejo del Sistema

Antes de que un objeto actúe, debe aprender a comunicarse. Este módulo trata sobre la creación de un puente de entendimiento entre la lógica interna del microcontrolador y el lenguaje humano. No programamos luces, programamos flujos de interacción que podemos monitorear y diagnosticar en tiempo real.

**Concepto:** Visibilizar el pensamiento digital.

**Objetivo:** Comprender la estructura básica de un programa (setup y loop) y utilizar el monitor serial para aprender a comunicarnos con nuestro hardware.

## ¿Que es un microcontrolador?

El microcontrolador es el cerebro de nuestro proyecto. Es la herramienta a la que entregamos nuestro "brief" de diseño en forma de codigo y su respuesta es nuestro "prototipo" Es un circuito integrado programable que contiene todos los componentes de una computadora en un solo chip. A diferencia de un celular, que está diseñado para hacer mil tareas a la vez, un microcontrolador está diseñado para hacer una sola cosa extremadamente bien: leer señales del mundo físico y responder en consecuencia. 
En este taller, el microcontrolador actúa como un traductor universal. Su función principal es recibir información de los sensores, procesar esa información según las reglas que tú escribas en el código y enviar instrucciones a los actuadores.

Sus tres funciones vitales:

**Sentir (Inputs):** Recibe señales eléctricas del entorno.

**Pensar (Lógica):** Ejecuta el código que tú has escrito para decidir qué hacer con esas señales.

**Actuar (Outputs):** Envía energía para generar un cambio físico en el mundo.

## ¿Cómo puedo hablar con el?

Programar no es darle órdenes a una máquina en un lenguaje extraño; es redactar un guion de comportamiento. Para que el microcontrolador entienda este guion, necesitamos una estructura clara que se divide en dos momentos temporales: La definición y la ejecución.

**Definición Void setup()** Ocurre una sola vez, justo cuando el microcontrolador se enciende. Aquí definimos nuestro mapa y nuestro actores: qué pines son entradas, cuáles son salidas y a qué velocidad vamos a hablar. Es el equivalente a definir cual es el entorno antes de empezar a diseñar.

**Ejecución Void loop()** Una vez que termina el setup, El loop es donde entra el "diseño", el microcontrolador ejecuta el flujo de ordenes que esté aquí una y otra vez, infinitamente, a una velocidad increíble. Es aquí donde ocurre la interactividad. Donde los actores que definimos ejecutan sus tareas en el órden que les hemos asignado.
