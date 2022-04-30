#include <gtest/gtest.h>

// Demonstrate some basic assertions
TEST(HelloTest, BasicAssertions) {
	// Expect two strings to not be equal
	EXPECT_STRNE("HELLO", "WORLD");

	// Expect equality
	EXPECT_EQ(7 * 6, 42);
}
