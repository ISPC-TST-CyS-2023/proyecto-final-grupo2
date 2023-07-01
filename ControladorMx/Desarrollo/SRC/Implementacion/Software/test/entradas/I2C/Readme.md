## $\textcolor{orange}{Puerto\ I2C :}$


Un puerto I2C (Inter-Integrated Circuit) es un protocolo de comunicación serie síncrono utilizado para la transferencia de datos entre dispositivos electrónicos. Fue desarrollado por Philips Semiconductor (ahora NXP Semiconductors) y se utiliza ampliamente en una amplia gama de aplicaciones.

El puerto I2C utiliza dos líneas de comunicación principales:

1. SDA (Serial Data Line): La línea SDA se utiliza para la transferencia bidireccional de datos entre los dispositivos conectados. Los datos se envían en forma de paquetes de bits secuenciales a través de esta línea.

2. SCL (Serial Clock Line): La línea SCL proporciona una señal de reloj maestra que sincroniza la transferencia de datos en el bus I2C. Los datos se transmiten y reciben en sincronización con los pulsos de reloj generados por esta línea.

El protocolo I2C permite la comunicación entre un dispositivo maestro y uno o varios dispositivos esclavos en un bus compartido. El dispositivo maestro controla la secuencia de transmisión y recepción de datos, mientras que los dispositivos esclavos responden a las solicitudes del maestro.

Cada dispositivo conectado al bus I2C tiene una dirección única, que permite al maestro identificar y comunicarse con el dispositivo deseado. Esto permite la conexión de múltiples dispositivos en el mismo bus I2C, lo que hace que el protocolo sea ideal para aplicaciones que requieren múltiples periféricos.

El puerto I2C es conocido por ser simple y eficiente, ya que utiliza solo dos líneas para la comunicación. Además, es un protocolo de bajo consumo de energía y se puede utilizar en sistemas con diferentes niveles de voltaje.

Los dispositivos comunes que utilizan comunicación I2C incluyen sensores, módulos de memoria, dispositivos de pantalla, circuitos integrados y muchos otros componentes electrónicos.

Para utilizar el puerto I2C, es necesario que los dispositivos conectados sean compatibles con el protocolo I2C y que el software del microcontrolador o microprocesador utilizado sea capaz de comunicarse a través del I2C. Se requiere una biblioteca o una interfaz de programación para manejar las operaciones de lectura y escritura en el bus I2C y comunicarse con los dispositivos conectados.


## $\textcolor{orange}{Pinout\ ESP32 (30 pines): }$


![image](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo2/assets/46485082/cde9d898-80ae-40e7-b8f4-abc1276b1a6b)

## $\textcolor{orange}{Dispositivos\ con\ comunicacion\ I2C : }$

Existen numerosos dispositivos que utilizan la comunicación I2C (Inter-Integrated Circuit). Algunos ejemplos comunes de dispositivos que utilizan esta interfaz son:

1. Sensores de temperatura y humedad: Muchos sensores de temperatura y humedad, como el DHT11 y el BME280, utilizan la comunicación I2C para enviar datos de medición al microcontrolador.

2. Acelerómetros y giroscopios: Los dispositivos de detección de movimiento, como el MPU-6050 y el LSM6DS3, se comunican a través de I2C para proporcionar información sobre la orientación y la aceleración.

3. Pantallas OLED y LCD: Algunas pantallas OLED y LCD, como el SSD1306 y el LCD1602, utilizan la comunicación I2C para recibir comandos y enviar datos de visualización desde el microcontrolador.

4. Memorias EEPROM: Las memorias EEPROM, como la serie 24CXX, utilizan I2C para leer y escribir datos de forma no volátil.

5. Convertidores analógico-digitales (ADC): Algunos ADC, como el ADS1115, se comunican a través de I2C para convertir señales analógicas en digitales y transmitirlas al microcontrolador.

6. Módulos de reloj en tiempo real (RTC): Los RTC, como el DS1307 y el PCF8563, utilizan I2C para mantener un seguimiento preciso del tiempo y la fecha.

7. Controladores de LED: Algunos controladores de LED, como el PCA9685, se comunican a través de I2C para controlar la intensidad y el color de los LED.

Estos son solo algunos ejemplos de dispositivos que utilizan comunicación I2C. El protocolo I2C es ampliamente utilizado debido a su simplicidad, flexibilidad y capacidad para conectar múltiples dispositivos en el mismo bus.


## $\textcolor{orange}{Simulacion\ comunicacion\ UART : }$

Se realizo un test simulado en Wokwi para el puerto de comunicacion I2C.

https://wokwi.com/projects/369050357652771841

