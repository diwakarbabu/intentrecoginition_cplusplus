#include <gtest/gtest.h>
#include "header.h"

TEST(CheckIntent, IntentFunctionTester)
{
  EXPECT_EQ(1,checkintent("What is the weather?"));
  EXPECT_EQ(2,checkintent("What is the weather in Paris?"));
  EXPECT_EQ(3,checkintent("Am I free tomorrow?"));
  EXPECT_EQ(4,checkintent("Tell me an interesting fact."));
}