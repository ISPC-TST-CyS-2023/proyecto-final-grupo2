## $\textcolor{orange}{Puerto\ UART :}$

Un puerto UART (Universal Asynchronous Receiver-Transmitter) es una interfaz de comunicación serie utilizada para transmitir y recibir datos en formato serie. Proporciona una forma estándar de enviar y recibir datos de manera secuencial entre dispositivos electrónicos.

Un puerto UART consta de dos componentes principales:

1. Transmisor (Transmitter): El transmisor convierte los datos paralelos en serie para enviarlos a través de la línea de transmisión. Toma los datos binarios de entrada, los divide en bits individuales y los envía uno tras otro en secuencia.

2. Receptor (Receiver): El receptor recibe los datos serie de la línea de transmisión y los convierte en datos paralelos para su uso por parte del dispositivo. Recibe los bits de datos serie, los reagrupa y los convierte en datos binarios paralelos para que el dispositivo pueda procesarlos.

La comunicación a través del puerto UART se basa en un flujo constante de bits de datos enviados a una velocidad de transmisión (baud rate) específica. Los bits se envían de forma secuencial, uno después del otro, sin una señal de reloj dedicada. En su lugar, los dispositivos conectados deben acordar previamente una velocidad de transmisión común para asegurar una comunicación adecuada.

Además de los bits de datos, la comunicación UART también puede incluir bits de inicio (start bits), bits de parada (stop bits) y bits de paridad (parity bits) para proporcionar detección y corrección de errores en la transmisión.

Los puertos UART son ampliamente utilizados en una variedad de dispositivos electrónicos, como microcontroladores, módulos de comunicación inalámbrica, sensores y otros periféricos, para permitir la comunicación serie con otros dispositivos compatibles con UART.




## $\textcolor{orange}{Pinout\ ESP32 (30 pines): }$

![image](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo2/assets/46485082/8c2d53b8-24eb-43de-8252-f6f4989d28db)

## $\textcolor{orange}{Dispositivos\ con\ comunicacion\ UART : }$

