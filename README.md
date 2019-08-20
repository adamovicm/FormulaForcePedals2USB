# FormulaForcePedals2USB
**Convert Logitech Formula Force EX pedals to USB using Arduino Leonardo**


By default, pedals are connected to the wheel using RS232 interface, while the wheel connects to the PC over USB. The idea was to plug the pedals directly into PC, without using the wheel, and use them as **rudder pedals** in flight sims. This is done with Arduino Leonardo, using [MHeironimus/ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary).

Using the the included program assigns both pedals to **single axis**, centered when pedals are depressed.

Hardware needed:
* ATmega32u4 compatible development board (Arduino Leonardo)
* Female RS232 DB9 connector
* Wires
* Logitech Formula Force EX pedals (wheel is not needed)

### DB9 connector and connections

<img src="/images/db9female.jpg">

