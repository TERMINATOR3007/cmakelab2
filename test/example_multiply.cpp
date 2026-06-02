#include "gtest/gtest.h"
#include "example.h"

TEST(example, multiply)
{
    double res;
    
    res = multiply_numbers(2.0, 3.0);
    ASSERT_NEAR(res, 6.0, 1.0e-11);
    
    res = multiply_numbers(5.0, 0.0);
    ASSERT_NEAR(res, 0.0, 1.0e-11);
    
    res = multiply_numbers(-2.0, 4.0);
    ASSERT_NEAR(res, -8.0, 1.0e-11);
    
    res = multiply_numbers(-3.0, -4.0);
    ASSERT_NEAR(res, 12.0, 1.0e-11);
    
    res = multiply_numbers(7.0, 1.0);
    ASSERT_NEAR(res, 7.0, 1.0e-11);
}
