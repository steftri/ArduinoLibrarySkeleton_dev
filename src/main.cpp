#ifdef ARDUINO  

#include <Arduino.h>   // needed for serial access

void setup()
{ 
  Serial.begin(115200);
  Serial.println(__LIBRARY_NAME__);
  Serial.println(__DATE__ " " __TIME__);
}

void loop()
{
}

#else

#include <iostream>

int main(int argc, char *argv[])
{
  std::cout << __LIBRARY_NAME__ << std::endl;
  std::cout << __DATE__ " " __TIME__ << std::endl;
  return 0;
}

#endif
