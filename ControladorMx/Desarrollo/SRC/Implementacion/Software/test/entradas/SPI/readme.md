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


![image](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo2/assets/46485082/cde9d898-80ae-40e7-b8f4-abc1276b1a6b)

## $\textcolor{orange}{Dispositivos\ con\ comunicacion\ SPI : }$




## $\textcolor{orange}{Simulacion\ comunicacion\ SPI : }$

Se realizo un test simulado en Wokwi para el puerto de comunicacion I2C.

https://wokwi.com/projects/369056753944481793
