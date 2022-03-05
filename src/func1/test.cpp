// TestCase for google-test
#include "gtest/gtest.h"
extern "C" {
#include "func1.h"
}

class fixtureName : public ::testing::Test {
protected:
    virtual void SetUp(){
    }
    virtual void TearDown(){
    }
};

TEST_F(fixtureName, testOk)
{
    EXPECT_EQ(0, function(0));
    EXPECT_EQ(1, function(100));
}
TEST_F(fixtureName, testNg)
{
    EXPECT_EQ(1, function(0));
    EXPECT_EQ(0, function(100));
}
