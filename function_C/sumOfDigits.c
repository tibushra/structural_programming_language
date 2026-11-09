#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int remaining = n % 10;
        sum = sum + remaining;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n = 1678;
    int answer = sumOfDigits(n);
    printf("%d", answer);
    return 0;
}