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
  * support of debugging on devices with ESP32 using ESP-Prog JTAG interface


## Development Environment

For library development using Visual Studio Code, the following tools and frameworks are used:

| Type | Software | Version | Manufacturer/Maintainer |
| ---- | -------- | ------- | ------------------------| 
| OS | Windows 11 | latest | Microsoft |
| Driver | CP210x Universal Windws Driver | 11.2.0 | Silicon Labs | 
| Interpreter | Python | 3.10 | Python Software Foundation |
| Runtime Environment | Java 8 | Update 371 | Oracle
| IDE | Visual Studio Code | 1.77.3 | Microsoft |
| IDE Extension | C/C++ | 1.18.3 | Microsoft |
| IDE Extension | PlatformIO IDE | 3.1.1 | PlatformIO |
| IDE Extension | PlantUML | 2.17.5 | yebbs |
| Code Analyzer | Cppcheck | 2.12 | Daniel Marjamäki | 
| RCS | git | 2.40.0 | Junio Hamano |
| RCS | Git Extensions | 4.0.2 | Henk Mesthuis |
| Merge Tool | P4Merge | 2023.1/2419860 | Perforce |

### Arduino UNO/MEGA2560:

Additionally, for ATmega testing the following tools are used:

| Type | Software | Version | Manufacturer/Maintainer |
| ---- | -------- | ------- | ------------------------| 
| SOUP | avr-debugger | 1.5 | Jan Dolinay |


### ESP32
 
Additionally, for ESP32 testing the following tools are used:

#### Hardware

* ESP-Prog by Espressif

#### Software

| Type | Software | Version | Manufacturer/Maintainer |
| ---- | -------- | ------- | ------------------------| 
| Driver | CDM | v2.12.36.4 | FTDI Chip |
| Tool | Zadig | 2.8 | Pete Batard |

# Debugging

## ATmega

On Arduino UNO/MEGA2560, debugging is supported via a software solution by Jan Dolinay. To enable debugging, the function `debug_init()` provided by `avr8-stub.h` must be called.

## ESP8266

Debugging on ESP8266 is currently not supported by PlatformIO. There are other solutions which are not checked out yet.

## ESP32

For ESP32 based devices, the ESP-Prog can be used. In this case, only the ESP-Prog is connected to the computer via USB. 

A good description how to debug can be found here: [Debugging ESP32 Arduino & ESP-IDF Projects using ESP-Prog and PlatformIO](https://www.circuitstate.com/tutorials/debugging-esp32-arduino-esp-idf-projects-using-esp-prog-and-platformio) 

The following PINs of ESP-Prog and ESP32 device has to be connected: 
| Signal   | ESP-Prog | ESP32       |
| -------- | -------- | ----------- |
| VDD (3,3V) | DC3-10P, pin 1 | 3V3 |
| GND | DC3-10P, pin 3  | GND |
| ESP_TMS | DC3-10P, pin 2 | GPIO14 |
| ESP_TCK | DC3-10P, pin 4 | GPIO13 |
| ESP_TDO | DC3-10P, pin 6 | GPIO15 |
| ESP_TDI | DC3-10P, pin 8 | GPIO12 |

**Attention:** On Windows, OpenOCD cannot use the FTDI driver for communication with the JTAG port of ESP-Prog. To address this issue, it is necessary to substitute the FTDI driver associated with Interface 0 of the FT2232HL (VID 0403, PID 6010) with the WinUSB driver. This task can be accomplished using a utility named Zadig. For comprehensive instructions, please refer to the tutorial above. 

## Known Anomalies

* Debugging via ESP-Prog does not work with ESP8266
* Debugging via ESP-Prog does not work with Lolin32 (ESP32-D0WDQ6 rev 1.1)

## Changelog

### 1.1.0

* Debugging option for Arduino UNO/MEGA2560 added
* Debugging option for ESP32 added

### 1.0.0

* Initial release


## Website

Further information can be found on [GitHub](https://github.com/steftri/ArduinoLibrarySkeleton_dev).
