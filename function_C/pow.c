#include <stdio.h>

double power(double base, int exponent)
{
    float result = 1.0;
    int isNegative = 0;

    if (exponent < 0)
    {
        isNegative = 1;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    if (isNegative)
    {
        result = 1 / result;
    }

    return result;
}

int main()
{
    float base;
    printf("Enter base: ");
    scanf("%f", &base);
    int exponent;
    printf("Enter exponent: ");
    scanf("%f", &exponent);
    printf("%.4lf", power(2.0, -5));
    return 0;
}