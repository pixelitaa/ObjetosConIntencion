# Objetos Sin Ataduras

El diseño ya no termina en el objeto físico. En este módulo, el objeto trasciende su ubicación y se conecta al vasto multiverso de Internet. Aprenderemos que un sensor en una habitación puede activar un evento al otro lado del mundo, convirtiendo un producto aislado en un servicio conectado.

## ¿Qué es el IoT?

Para un diseñador, el IoT (Internet of Things) no se trata de "conectar cosas a internet" porque sí, sino de ir más allá. Es la capacidad de que un objeto tenga presencia en dos lugares a la vez: en el mundo físico (donde está el sensor) y en el mundo digital (donde está el dato). Esto nos permite tener un nuevo plano en el que implementar interacciones con nuestros usuarios.

Arduino nos provee de una plataforma llamada Arduino Cloud, en la que podemos crear dashboards interactivos y una configuración sencilla para microcontroladores con capabilidades WIFI

<img width="1918" height="971" alt="Captura de pantalla 2026-04-10 114319" src="https://github.com/user-attachments/assets/288c6fc6-bef0-4964-acbc-2c1b9074ec11" />


## Ejercicio Final: Tu Primer Dashboard Interactivo

En este ejercicio, tomaremos la lectura del Sensor de Luz (LDR) y la enviaremos a la plataforma Arduino Cloud. Además, crearemos un botón en nuestro celular para encender el LED del taller de forma remota. Para conectar nuestro microcontrolador a la web, debemos añadir la librería "WiFi" y establecer conexión ingresando las credenciales de nuestra red. La plataforma Arduino Cloud permite realizar este proceso mediante la interfaz para una introducción menos engorrosa.

Sin embargo, la conexión tradicional se haría de la siguiente forma:

```cpp
#include <WiFi.h> // Librería para conectar al Wi-Fi
const char* ssid = "TU_WIFI_NAME"; 
const char* password = "TU_WIFI_PASSWORD";

## Esquema de conexión de nuestro ejercicio:

<img width="587" height="468" alt="Captura de pantalla 2026-04-10 114423" src="https://github.com/user-attachments/assets/3f2c4c8b-e58c-4761-a523-2ea78f8ed2d4" />

**Ahora es su turno!! :) Podran encontrar el código de este ejercicio en la carpeta de este módulo, al ser en un plataforma nueva haremos la configuración paso a paso.**
