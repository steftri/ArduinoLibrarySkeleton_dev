# ArduinoLibrarySkeleton_dev

Development repository for Arduino library skeleton


## General

The skeleton serves as a template for an arduino library.  


## Features

* Basic arduino library file structure
* Basic arduino class methods ('begin' and 'end' as well as an example getter and setter) 
* platformIO development respository with 
  * 'unity' unit tests
  * support of native platform, Arduino Uno, Arduino Mega2560, ESP8266 and ESP32 
  * support of debugging on Arduinos with ATmega CPU using the serial interface


## Development Environment

For library development using Visual Studio Code, the following tools and frameworks are used:

* git 2.40.0 by Junio Hamano 
* Git Extensions 4.0.2 by Henk Mesthuis
* Visual Studio Code 1.77.2 by Microsoft
* MinGW Installation Manager 0.6.2-beta-20131004-1 by Keith Marshall (mingw32-base 2013072200, mingw32-gcc 6.3.0-1, mingw32-gcc-g++ 6.3.0-1)
* Python 3.10 by the Python Software Foundation
* Java 8 Update 371 by Oracle
* PlantUML 2.17.5 by Arnaud Roques
* Cppcheck 2.12 by Daniel Marjamäki
* PlatformIO IDE 3.1.1 by PlatformIO

### Arduino UNO/MEGA2560:

 * Platform atmelavr v4.2.0
   * framework-arduino-avr v5.1 by PlatformIO
   * tool-avrdude v1.60300 by PlatformIO
   * toolchain-atmelavr v1.70300 by PlatformIO
 * avr-debugger v1.5 by Jan Dolinay

### ESP32
 
 * Platform espressif32 v6.3.1
   * framework-arduinoespressif32 v3.20009 by Espressif
   * tool-esptoolpy v1.40501 by PlatformIO
   * tool-mkfatfs v2.0 by PlatformIO
   * tool-mklittlefs v1.203 by PlatformIO
   * tool-mkspiffs v2.230 by PlatformIO
   * tool-openocd-esp32 v2.1100 by PlatformIO
   * toolchain-xtensa-esp32 v8.4.0+2021r2-patch5 by Espressif



## SOUP (Software of unknown provenance)

### Arduino UNO/MEGA2560:

 * framework-arduino-avr v5.1 by PlatformIO
 * avr-debugger v1.5 by Jan Dolinay

### ESP32

 * framework-arduinoespressif32 v3.20009 by Espressif

## Known Anomalies

* none


## Changelog

### 1.1.0

* Debugging option for Arduino UNO/MEGA2560 added

### 1.0.0

* Initial release


## Website

Further information can be found on [GitHub](https://github.com/steftri/ArduinoLibrarySkeleton_dev).
