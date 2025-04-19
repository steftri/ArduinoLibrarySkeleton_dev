#include <gtest/gtest.h>

#include "arduinolibraryskeleton.h"



class ArduinoLibraryUnitTest : public ::testing::Test 
{
protected:
  ArduinoLibrarySkeleton myArduinoLibrary;
    
  void SetUp() override 
  {
    myArduinoLibrary.begin();
  }

  void TearDown() override 
  {
    myArduinoLibrary.end();
  }
};



TEST_F(ArduinoLibraryUnitTest, DefaultValueTest) 
{
  EXPECT_EQ(myArduinoLibrary.getValue(), 0u);
}



TEST_F(ArduinoLibraryUnitTest, SetValueTest) 
{
  myArduinoLibrary.setValue(4711);
  EXPECT_EQ(myArduinoLibrary.getValue(), 4711u);
}



int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
