#include "formula.h"
#include "gtest/gtest.h"

TEST(blaTest, test1) {
  EXPECT_EQ(math::Formula::identity(0), 0);
  EXPECT_EQ(math::Formula::identity(10), 20);
  EXPECT_EQ(math::Formula::identity(50), 100);
}
