#include<cmath>
#include<unittest++/UnitTest++.h>

unsigned factorial (unsigned n)
{
 unsigned result = 1;
  int i;
  for (i = 2; i <= n; i++)
  {
    result *= i;
  }
  return result;
};

SUITE(describe_factorial)
{
  TEST(factorial_of_zero_should_be_1)
  {
    CHECK_EQUAL(1,factorial(0));
  }
  TEST(factorial_of_4_should_be_24)
  {
    CHECK_EQUAL(24,factorial(4));
  }
}

int main()
{
return UnitTest :: RunAllTests ();
}
