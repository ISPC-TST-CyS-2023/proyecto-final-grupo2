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




Link

https://wokwi.com/projects/369050357652771841

