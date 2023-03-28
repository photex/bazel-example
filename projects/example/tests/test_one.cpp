
#include <gtest/gtest.h>

#include "example.h"

TEST(ExampleSuite, DoesStuff)
{
	Example ex(20);

	ASSERT_EQ(ex.GetName(), "John Doe");
	ASSERT_EQ(ex.GetFoo(), 20);
	ASSERT_EQ(ex.GetBar(), 40);
}

TEST(ExampleSuite, AndSomeOtherStuff)
{
	ASSERT_TRUE(true);
}
