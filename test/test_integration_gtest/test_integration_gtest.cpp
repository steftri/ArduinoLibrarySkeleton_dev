#include <gtest/gtest.h>
#include "arduinolibraryskeleton.h"

class ArduinoLibrarySkeletonTest : public ::testing::Test 
{
protected:
    ArduinoLibrarySkeleton myArduinoLibrarySkeleton;

    void SetUp() override {
        myArduinoLibrarySkeleton.begin();
    }

    void TearDown() override {
        myArduinoLibrarySkeleton.end();
    }
};

TEST_F(ArduinoLibrarySkeletonTest, DefaultValueTest) 
{
    EXPECT_EQ(myArduinoLibrarySkeleton.getValue(), 0u);
}

TEST_F(ArduinoLibrarySkeletonTest, SetValueTest) 
{
    myArduinoLibrarySkeleton.setValue(4711);
    EXPECT_EQ(myArduinoLibrarySkeleton.getValue(), 4711u);
}


int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
