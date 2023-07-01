# Características de los periféricos del ESP32

- 18 canales de conversión analógico-digital (ADC)
- 10 GPIO de detección capacitiva
- 3 interfaces UART
- 3 interfaces SPI
- 2 interfaces I2C
- 16 canales de salida PWM
    - GPIO0 a GPIO19
    - GPIO21 a GPIO23
    - GPIO25 a GPIO27
    - GPIO32 a GPIO33
- 2 Convertidores de digital a analógico (DAC)
- 2 interfaces I2S

# PWM

El controlador PWM de LEDs ESP32 tiene 16 canales independientes que pueden ser configurados para generar señales PWM con diferentes propiedades. Todos los pines que pueden actuar como salidas pueden ser utilizados como pines PWM (los pines GPIO 34 a 39 de sólo entrada no pueden generar PWM). Técnica utilizada para controlar la potencia de una señal digital mediante la variación pulso. Especialmente útil en aplicaciones donde se quiere controlar la velocidad de motores, regular la intensidad de una luz LED o generar señales analógicas simuladas.

Para configurar una señal PWM, es necesario definir estos parámetros en el código:

- La frecuencia de la señal;
- Ciclo de trabajo;
- Canal PWM;
- GPIO en el que se quiere emitir la señal.


## Ejemplo de prueba

Esta función se puede realizar simplemente declarando el pin como salida, luego utilizando la función analogWrite:

- pinMode(OUTPUT,25); en esta linea se configura el pin la GPIO25 como salida

- analogWrite(25, 256); //activamos el pin GPIO25 al 100% de su potencia





## Video

