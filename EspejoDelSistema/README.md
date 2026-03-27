# El Espejo del Sistema
Antes de que un objeto actúe, debe aprender a comunicarse. Este módulo trata sobre la creación de un puente de entendimiento entre la lógica interna del microcontrolador y el lenguaje humano. No programamos luces, programamos flujos de interacción que podemos monitorear y diagnosticar en tiempo real.

## ¿Qué es un microcontrolador?
El microcontrolador es el cerebro de nuestro proyecto. Es la herramienta a la que entregamos nuestro "brief" de diseño en forma de código y su respuesta es nuestro "prototipo". Es un circuito integrado programable que contiene todos los componentes de una computadora en un solo chip. A diferencia de un celular, que está diseñado para hacer mil tareas a la vez, un microcontrolador está diseñado para hacer una sola cosa extremadamente bien: leer señales del mundo físico y responder en consecuencia.

En este taller, el microcontrolador actúa como un traductor universal. Su función principal es recibir información de los sensores, procesar esa información según las reglas que tú escribas en el código y enviar instrucciones a los actuadores.

Sus tres funciones vitales:

**Sentir (Inputs):** Recibe señales eléctricas del entorno.

**Pensar (Lógica):** Ejecuta el código que tú has escrito para decidir qué hacer con esas señales.

**Actuar (Outputs):** Envía energía para generar un cambio físico en el mundo.

## ¿Cómo puedo hablar con él?
Programar no es darle órdenes a una máquina en un lenguaje extraño; es redactar un guion de comportamiento. Para que el microcontrolador entienda este guion, necesitamos una estructura clara que se divide en dos momentos temporales: la definición y la ejecución.

**Definición void setup():** Ocurre una sola vez, justo cuando el microcontrolador se enciende. Aquí definimos nuestro mapa y nuestros actores: qué pines son entradas, cuáles son salidas y a qué velocidad vamos a hablar. Es el equivalente a definir cuál es el entorno antes de empezar a diseñar.

**Ejecución void loop():** Una vez que termina el setup, el loop es donde entra el "diseño". El microcontrolador ejecuta el flujo de órdenes que esté aquí una y otra vez, infinitamente, a una velocidad increíble. Es aquí donde ocurre la interactividad, donde los actores que definimos ejecutan sus tareas en el orden que les hemos asignado.

**Sintaxis:** Al igual que en un archivo de Illustrator una curva mal cerrada puede arruinar un trazado, en el código la puntuación es estructural. Nuestro microcontrolador habla un idioma exquisito y no perdona errores: las mayúsculas y minúsculas se distinguen; las llaves { } agrupan ideas (como los grupos de capas); el punto y coma ; indica que una instrucción ha terminado (como el punto final de una frase). Estas y más exquisiteces las veremos más adelante.

## El espejo de nuestro sistema: Monitor Serial
Como el microcontrolador no tiene pantalla, necesitamos un espejo. El Serial Print es nuestra herramienta de comunicación bidireccional.

¿Qué es? Es un canal de datos que envía texto desde el chip hacia tu computadora a través del cable USB.

¿Para qué sirve? En diseño lo usamos como un sistema de feedback. Si un sensor no parece estar funcionando o si una lógica no responde, le pedimos al microcontrolador que "nos hable" y nos diga qué está pasando por dentro.

**Ahora que sabemos lo básico, te invito a abrir el ejercicio adjunto en Arduino IDE (que será nuestro software de trabajo para hablar con microcontroladores) y ejecutar el código que se encuentra en la otra carpeta de este repositorio (estos archivos siempre serán .ino).**
