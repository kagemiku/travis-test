#include <gtest/gtest.h>
#include "../sources/calculator.hpp"


TEST(CalculatorTest, add)
{
    Calculator<int> calc(10, 20);
    ASSERT_EQ(30, calc.add());
}


TEST(CalculatorTest, sub)
{
    Calculator<int> calc(10, 20);
    ASSERT_EQ(-10, calc.sub());
}


TEST(CalculatorTest, mul)
{
    Calculator<int> calc(10, 20);
    ASSERT_EQ(200, calc.mul());
}


