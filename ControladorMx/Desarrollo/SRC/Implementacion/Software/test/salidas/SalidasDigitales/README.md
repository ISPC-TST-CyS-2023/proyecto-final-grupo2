# Especificaciones de Salida
- Diseño y desarrollo de salidas digitales (P 5 - 14- 16 - 17 - 18 - 27 )

# Salidas digitales
Recordaremos que una señal digital puede variar únicamente entre dos valores, que denominamos -Vcc y +Vcc. Una salida digital es un dispositivo que permite variar su tensión a uno de estos dos valores mediante programación, y por tanto nos permite realizar acciones con el entorno.
En general, los voltajes -Vcc y +Vcc corresponden con 0V (GND) y 5V. Sin embargo, el Microcontrolador ESP32, también trabaja con 3.3V.
Intensidad máxima de una salida digital
En general las salidas digitales de autómatas no están pensandas para proporcionar potencia, si no para interactuar con electrónica u otros autómatas.
La intensidad máxima que puede dar un pin es de 40 mA, si bien el valor recomendado es de 20mA. Además hay restricciones adicionales en cuanto a la potencia, como que la suma total de todas las salidas debe ser inferior a 300 mA, y a su vez no pueden superar 150 mA por puerto.
Esta potencia es suficiente para encender un led, un pequeño servomotor de 9g, o encender algún sensor, pero no es suficiente para alimentar cargas mayores. Si queremos mover una carga superior, como un motor de corriente continua, un servo, o incluso un rele, tendremos que emplear una etapa de amplificación, como un transistor BJT.
No es conveniente forzar los límites de potencia de forma prolongada, la placa podría calentarse y dañarse. El límite de 20 mA por salida significa que, para un voltaje de 5V, la resistencia del dispositivo que queramos alimentar no debe ser inferior a 200 ohmnios.

# Entradas digitales - Funciones
- Función pinMode(pin, mode):
Función usada en la function setup() para configurar un pin dado para comportarse como INPUT o OUTPUT. Ej. pinMode(pin, OUTPUT); configura el pin número 'pin' como de salida. Los pines de Arduino funcionan por defecto como entradas, de forma que no necesitan declararse explícitamente como entradas empleando pinMode().
- Función digitalRead(pin):
Lee el valor desde un pin digital específico. Devuelve un valor HIGH o LOW. El pin puede ser especificado con una variable o una constante (0-13). Ej. v = digitalRead(Pin);
- Funcion digitalWrite(pin, value):
Introduce un nivel alto (HIGH) o bajo (LOW) en el pin digital especificado. De nuevo, el pin puede ser especificado con una variable o una constante 0-13. Ej. digitalWrite(pin, HIGH);


