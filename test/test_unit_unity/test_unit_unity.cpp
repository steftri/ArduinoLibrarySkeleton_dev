#include <unity.h>

#ifdef ARDUINO  
#include <Arduino.h>   // needed for service delay
#endif

#include "ArduinoLibrarySkeleton.h"



ArduinoLibrarySkeleton myArduinoLibrary;



void setUp(void) 
{
  // set stuff up here
  (void)myArduinoLibrary.begin();
}

void tearDown(void) 
{
  // clean stuff up here
  myArduinoLibrary.end();
}



void default_value_test(void) 
{
  // check default value
  TEST_ASSERT_EQUAL_UINT32(0, myArduinoLibrary.getValue());
}


void set_value_test(void) 
{
  // check set value
  myArduinoLibrary.setValue(4711);
  TEST_ASSERT_EQUAL_UINT32(4711, myArduinoLibrary.getValue());
}




void setup()
{
#ifdef ARDUINO  
    delay(2000); // service delay
#endif    
    UNITY_BEGIN();

    RUN_TEST(default_value_test);
    RUN_TEST(set_value_test);

    UNITY_END(); // stop unit testing
}



void loop()
{
}


#ifndef ARDUINO
// only needed if unit test is running in an native environment
int main(int argc, char *argv[])
{
  setup();
  loop();  // only execute loop once. We want to finish the test.
  return 0;
}
#endif
