#include <gtest/gtest.h>

#ifdef ARDUINO  
#include <Arduino.h>   // needed for service delay
#endif

#include "arduinolibraryskeleton.h"



TEST(ArduinoLibrarySkeleton, test_case_1) 
{
  ArduinoLibrarySkeleton myArduinoLibrarySkeleton;
 
  (void)myArduinoLibrarySkeleton.begin();

  // test step 1: check default value
  EXPECT_EQ(myArduinoLibrarySkeleton.getValue(), 0ULL);

  // test step 2: check set value
  myArduinoLibrarySkeleton.setValue(4711);
  EXPECT_EQ(myArduinoLibrarySkeleton.getValue(), 4711ULL);

  myArduinoLibrarySkeleton.end();
}



#ifdef ARDUINO  
void setup()
{
  Serial.begin(115200);
  ::testing::InitGoogleTest();
}

void loop()
{
  if(RUN_ALL_TESTS())
    ;
  delay(1000);
}

#else
int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return 0;
}
#endif    
