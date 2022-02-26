#include "formula.hpp"
#include "tests_include.hpp"

TEST(blaTest, test1) {
  int *hello = new int[1000];
  delete[] hello;
  hello[0] = 5;
  EXPECT_EQ(hello[0], 5);
  math::Formula formula;
  EXPECT_EQ(formula.identity(0), 0);
  EXPECT_EQ(formula.identity(10), 10);
  EXPECT_EQ(formula.identity(50), 50);
}
