
#include <gtest/gtest.h>

#include "example.h"

TEST(ExampleSuite, DoesStuff)
{
	Example ex(20);
	ExampleData data;

	ASSERT_EQ(ex.GetFoo(), 20);
}

TEST(ExampleSuite, AndSomeOtherStuff)
{
	ASSERT_TRUE(true);
}
