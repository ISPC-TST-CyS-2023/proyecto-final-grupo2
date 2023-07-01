## $\textcolor{orange}{Puerto\ SPI :}$

Un puerto SPI (Serial Peripheral Interface) es una interfaz de comunicación serie síncrona utilizada para la transferencia rápida de datos entre un microcontrolador o microprocesador y otros dispositivos periféricos. Es ampliamente utilizado en sistemas embebidos y se caracteriza por su alta velocidad de transferencia y flexibilidad.

Un puerto SPI utiliza una arquitectura maestro/esclavo, donde el dispositivo maestro controla la comunicación y los dispositivos esclavos responden a las solicitudes del maestro. Puede haber un único dispositivo maestro y múltiples dispositivos esclavos conectados en el bus SPI.

Los componentes principales de un puerto SPI son los siguientes:

1. Línea de reloj (SCLK o SCK): Es una línea de señal generada por el dispositivo maestro que sincroniza la transferencia de datos entre el maestro y los dispositivos esclavos. Los datos se transfieren en cada pulso de reloj.

2. Línea de datos maestra a esclavo (MOSI o SDI): Es la línea a través de la cual el dispositivo maestro envía datos al dispositivo esclavo.

3. Línea de datos esclavo a maestro (MISO o SDO): Es la línea a través de la cual el dispositivo esclavo envía datos de vuelta al dispositivo maestro.

4. Línea de selección de dispositivo (SS o CS): Es una línea dedicada para seleccionar el dispositivo esclavo con el que se quiere comunicar el dispositivo maestro. Puede haber múltiples líneas de selección para diferentes dispositivos esclavos.

El puerto SPI se caracteriza por ser un protocolo de comunicación full-duplex, lo que significa que los datos se pueden transmitir y recibir simultáneamente. El dispositivo maestro inicia la comunicación seleccionando el dispositivo esclavo adecuado a través de la línea de selección de dispositivo y luego envía/recepta los datos a través de las líneas MOSI/MISO mientras se sincronizan con el pulso de reloj generado por la línea SCLK.

El protocolo SPI también permite configurar la velocidad de transferencia mediante la configuración del divisor de reloj, lo que permite ajustar la velocidad de comunicación según los requisitos del sistema.

El puerto SPI se utiliza comúnmente en una amplia gama de dispositivos, como pantallas TFT, tarjetas SD, sensores de alta velocidad, convertidores analógico-digitales, controladores de pantalla LED y muchos otros dispositivos que requieren una transferencia rápida de datos.

Es importante tener en cuenta que la configuración y los detalles específicos de la implementación del puerto SPI pueden variar según el microcontrolador o microprocesador utilizado. Por lo tanto, se recomienda consultar la documentación y las especificaciones del dispositivo en particular para obtener información precisa sobre cómo utilizar el puerto SPI en ese contexto específico.


## $\textcolor{orange}{Pinout\ ESP32 (30 pines): }$

![image](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo2/assets/46485082/fdd56578-1d4a-46c9-9b28-cb3cb1c047a6)



## $\textcolor{orange}{Dispositivos\ con\ comunicacion\ SPI : }$

Existen numerosos dispositivos que utilizan la comunicación SPI (Serial Peripheral Interface). Algunos ejemplos comunes de dispositivos que hacen uso de esta interfaz son:

1. Pantallas TFT y OLED: Muchas pantallas a color y monocromáticas utilizan la comunicación SPI para enviar datos de visualización desde el microcontrolador y recibir comandos de control.

2. Tarjetas de memoria: Las tarjetas SD (Secure Digital) y las tarjetas de memoria flash utilizan SPI para leer y escribir datos almacenados en ellas.

3. Convertidores analógico-digitales (ADC): Algunos ADC de alta velocidad, como el ADS1115, se comunican a través de SPI para convertir señales analógicas en digitales y transmitirlas al microcontrolador.

4. Convertidores digital-analógicos (DAC): Los DAC, como el MCP4921, utilizan la comunicación SPI para recibir datos digitales desde el microcontrolador y convertirlos en señales analógicas.

5. Sensores de temperatura y presión: Algunos sensores, como el BMP280 y el MAX31855, utilizan SPI para transmitir datos de medición al microcontrolador.

6. Módulos de radio transceptor: Los módulos de radio, como los basados en el chip NRF24L01, utilizan SPI para la comunicación inalámbrica con otros dispositivos.

7. Memorias EEPROM: Algunas memorias EEPROM, como la serie 25LCXX, se comunican a través de SPI para leer y escribir datos de forma no volátil.

8. Controladores de pantalla LED: Algunos controladores de matriz de LED, como el MAX7219, utilizan SPI para controlar los LED y actualizar el contenido mostrado.

Estos son solo algunos ejemplos de dispositivos que utilizan comunicación SPI. La interfaz SPI es ampliamente utilizada debido a su velocidad de transferencia rápida y su capacidad de conectar múltiples dispositivos en cascada utilizando líneas MOSI y MISO compartidas.


## $\textcolor{orange}{Simulacion\ comunicacion\ SPI : }$

Se realizo un test simulado en Wokwi para el puerto de comunicacion SPI.

https://wokwi.com/projects/369056753944481793
