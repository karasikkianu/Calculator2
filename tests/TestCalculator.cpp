//
// Created by МожаевАН on 04.03.2019.
//

#include <gtest/gtest.h>
#include "../Calculator.h"

#include <limits>

TEST(CalculatorTest, Constructor)
{
    Calculator Test1(5, 50);
    ASSERT_EQ(Test1.GetA(), 5);
    ASSERT_EQ(Test1.GetB(), 50);

    Calculator Test2(float(-5.5), 0);
    ASSERT_EQ(Test2.GetA(), -5.5);
    ASSERT_EQ(Test2.GetB(), 0);
}

TEST(CalculatorTest, Addition)
{
    Calculator Test1(5,5);
    Test1.Addition();
    EXPECT_EQ(Test1.GetAnswer(), 10);

    Calculator Test2(std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
    Test2.Addition();
    EXPECT_EQ(Test2.GetAnswer(), double(std::numeric_limits<float>::max() * float(2)));
    EXPECT_GE(Test2.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test2.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test3(-std::numeric_limits<float>::max(), -std::numeric_limits<float>::max());
    Test3.Addition();
    EXPECT_EQ(Test3.GetAnswer(), double(std::numeric_limits<float>::max() * -float(2)));
    EXPECT_GE(Test3.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test3.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test4(std::numeric_limits<float>::max(), std::numeric_limits<float>::min());
    Test4.Addition();
    EXPECT_GE(Test4.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test4.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test5(0, 0);
    Test5.Addition();
    EXPECT_EQ(Test5.GetAnswer(), 0);
}

TEST(CalculatorTest, Subtraction)
{
    Calculator Test1(10, 7);
    Test1.Subtraction();
    EXPECT_EQ(Test1.GetAnswer(), 3);

    Calculator Test2(std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
    Test2.Subtraction();
    EXPECT_EQ(Test2.GetAnswer(), 0);

    Calculator Test3(-std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
    Test3.Subtraction();
    EXPECT_GE(Test3.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test3.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test4(0, 0);
    Test4.Subtraction();
    EXPECT_EQ(Test4.GetAnswer(), 0);
}

TEST(CalculatorTest, Multiplication)
{
    Calculator Test1(10, 2.5);
    Test1.Multiplication();
    EXPECT_EQ(Test1.GetAnswer(), 25);

    Calculator Test2(10, -2.5);
    Test2.Multiplication();
    EXPECT_EQ(Test2.GetAnswer(), -25);

    Calculator Test3(-10, -2.5);
    Test3.Multiplication();
    EXPECT_EQ(Test3.GetAnswer(), 25);

    Calculator Test4(-10, 0);
    Test4.Multiplication();
    EXPECT_EQ(Test4.GetAnswer(), 0);

    Calculator Test5(std::numeric_limits<float>::max(), std::numeric_limits<float>::max());
    Test5.Multiplication();
    EXPECT_GE(Test5.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test5.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test6(-std::numeric_limits<float>::max(), -std::numeric_limits<float>::max());
    Test6.Multiplication();
    EXPECT_GE(Test6.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test6.GetAnswer(), std::numeric_limits<double>::max());
}

TEST(CalculatorTest, Division)
{
    Calculator Test1(25, 2.5);
    Test1.Division();
    EXPECT_EQ(Test1.GetAnswer(), 10);

    Calculator Test2(25, -2.5);
    Test2.Division();
    EXPECT_EQ(Test2.GetAnswer(), -10);

    Calculator Test3(-25, -2.5);
    Test3.Division();
    EXPECT_EQ(Test3.GetAnswer(), 10);

    Calculator Test4(std::numeric_limits<float>::max(), std::numeric_limits<float>::min());
    Test4.Division();
    EXPECT_GE(Test4.GetAnswer(), -std::numeric_limits<double>::max());
    EXPECT_LE(Test4.GetAnswer(), std::numeric_limits<double>::max());

    Calculator Test5(0, -2.5);
    Test5.Division();
    EXPECT_EQ(Test5.GetAnswer(), 0);

    Calculator Test6(-25, 0);
    EXPECT_THROW(Test6.Division(), std::logic_error);
    EXPECT_EQ(Test6.GetAnswer(), -std::numeric_limits<double>::infinity());
}
