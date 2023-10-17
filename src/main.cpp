#ifdef ARDUINO 
#include <Arduino.h> 
#if (ARDUINO_AVR_UNO || ARDUINO_AVR_NANO || ARDUINO_AVR_MINI || ARDUINO_AVR_MEGA || ARDUINO_AVR_MEGA2560)
#include <avr8-stub.h>  // needed for debug_init() - works only on Arduinos with ATmega CPU 
#endif
#else
#include <iostream>
#endif



void setup()
{ 
#ifdef ARDUINO
# if (ARDUINO_AVR_UNO || ARDUINO_AVR_NANO || ARDUINO_AVR_MINI || ARDUINO_AVR_MEGA || ARDUINO_AVR_MEGA2560)
  debug_init();
# else
  Serial.begin(115200);
  Serial.println(__LIBRARY_NAME__);
  Serial.println(__DATE__ " " __TIME__);
# endif
#else
  std::cout << __LIBRARY_NAME__ << std::endl;
  std::cout << __DATE__ " " __TIME__ << std::endl;
#endif
}



void loop()
{
  static volatile uint8_t value = 0;
  value++;   // do something very simple
}



#ifndef ARDUINO  
int main(int argc, char *argv[])
{
  setup();
  while(true)
    loop();
  return 0;
}
#endif
