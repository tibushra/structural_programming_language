#include <stdio.h>

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("The nCr is %d", ncr);
    return 0;
}