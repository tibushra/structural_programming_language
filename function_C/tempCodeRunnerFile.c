#include <stdio.h>

double power(double base, int exponent)
{
    int result = 1;
    int isNegative = 0;
    if (exponent > 0)
    {
        isNegative = 1;
        exponent = -exponent;
    }

    int number = base;

    for (int i = 1; i < exponent; i++)
    {
        base = base * number;
    }
    result = 1 / base;

    return result;
}

int main()
{
    printf("%.2lf", power(2.0, -5));
    return 0;
}