#include <stdio.h>

long factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d! = %ld\n", num, factorial(num));
    return 0;
}