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



void test_case_1(void) 
{
  // test step 1: check default value
  TEST_ASSERT_EQUAL_UINT32(0, myArduinoLibrary.getValue());

  // test step 2: check set value
  myArduinoLibrary.setValue(4711);
  TEST_ASSERT_EQUAL_UINT32(4711, myArduinoLibrary.getValue());
}



void setup()
{
#ifdef ARDUINO  
    delay(2000); // service delay
#endif    
    UNITY_BEGIN();

    RUN_TEST(test_case_1);

    UNITY_END(); // stop unit testing
}



void loop()
{
  // nothing to do here, since unit test is finished
}


#ifndef ARDUINO
// only needed if unit test is running in an native environment
int main(int argc, char *argv[])
{
  setup();
  loop();
  return 0;
}
#endif