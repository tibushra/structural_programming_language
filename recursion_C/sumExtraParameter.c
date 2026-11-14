#include <stdio.h>

int summation(int x, int n)
{
    int sum = 0;
    if (x > n)
        return 0;
    else
    {
        sum = x + summation(x + 1, n);
        return sum;
    }
}

int main()
{
    int result = summation(1, 5);
    printf("%d", result);
    return 0;
}