#include <unity.h>

#ifdef ARDUINO  
#include <Arduino.h>   // needed for service delay
#endif

#include "arduinolibraryskeleton.h"



ArduinoLibrarySkeleton myArduinoLibrarySkeleton;



void setUp(void) 
{
  // set stuff up here
  (void)myArduinoLibrarySkeleton.begin();
}

void tearDown(void) 
{
  // clean stuff up here
  myArduinoLibrarySkeleton.end();
}



void test_case_1(void) 
{
  // test step 1: check default value
  TEST_ASSERT_EQUAL_UINT32(0, myArduinoLibrarySkeleton.getValue());

  // test step 2: check set value
  myArduinoLibrarySkeleton.setValue(4711);
  TEST_ASSERT_EQUAL_UINT32(4711, myArduinoLibrarySkeleton.getValue());
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