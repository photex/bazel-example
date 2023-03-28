
#include <gtest/gtest.h>

#include "example.h"

TEST(ExampleSuite, DoesStuff)
{
	auto const test_val = 20;
	Example example(test_val);

	ASSERT_EQ(example.GetName(), "John Doe");
	ASSERT_EQ(example.GetFoo(), test_val);
	ASSERT_EQ(example.GetBar(), test_val + test_val);
}

TEST(ExampleSuite, AndSomeOtherStuff)
{
	ASSERT_TRUE(true);
}
