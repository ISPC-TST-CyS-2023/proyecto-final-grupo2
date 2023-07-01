
# $\textcolor{orange}{Especificaciones\ de\ Entrada :}$

- Diseño y desarrollo de entradas digitales (p 0 - 2 - 4 -12 - 13 - 15)
- Diseño y desarrollo de escalado para sensores resistivos en tensión
- Diseño y desarrollo de entradas analógicas (canales) 0-10V, 0-20 mA y 4-20 mA (P 34 - 35 - 36 - 39)




- Diseño y desarrollo de puertos de comunicación:
- [x] Entrada I2C
- [x] Entrada SPI
- [x] Entrada UART

# $\textcolor{orange}{Cuadro\ Comparativo\ de\ Puertos\ I2C\, SPI\ y\ UART: :}$


| Característica        | I2C                              | SPI                              | UART                            |
|-----------------------|----------------------------------|----------------------------------|---------------------------------|
| Tipo de comunicación  | Síncrona                         | Síncrona                         | Asíncrona                       |
| Líneas de comunicación| 2 (SDA, SCL)                     | 4 (SCLK, MOSI, MISO, SS/CS)      | 2 (TX, RX)                      |
| Topología de conexión | Bus maestro/esclavo              | Bus maestro/esclavo              | Punto a punto                   |
| Velocidad de transferencia | Hasta varios Mbps           | Hasta varios Mbps                | Hasta varios Mbps               |
| Direcciones de dispositivos | 7-bit o 10-bit               | Esclavos seleccionados por líneas de selección (SS/CS) | N/A                          |
| Control de flujo     | No                               | No                               | Puede admitir control de flujo  |
| Longitud máxima de cableado | Decenas de metros         | Depende de la velocidad y la distancia   | Decenas de metros           |
| Dispositivos comunes  | Sensores, pantallas, memorias    | Pantallas, tarjetas de memoria, sensores | Dispositivos seriales, como módems, GPS |
| Uso de pines          | Pocos pines necesarios           | Varios pines requeridos           | Pocos pines necesarios          |
| Complejidad           | Moderada                         | Moderada                         | Simple                          |

Es importante tener en cuenta que los detalles específicos y las características pueden variar dependiendo del dispositivo y la implementación utilizados. Este cuadro comparativo proporciona una visión general de las diferencias clave entre los puertos I2C, SPI y UART, pero es recomendable consultar la documentación y las especificaciones de los dispositivos individuales para obtener información precisa sobre su configuración y funcionamiento.
