#include <stdio.h>

// 1!/1+2!/2+3!/3+....+n!/n

int factorial(int n)
{
    int fact = 1;
    int result = 1;

    if (n == 1)
    {
        return 1;
    }
    else
    {
        // fact = (fact * n);
        // result = result / n;
        return (factorial(n - 1) * n);
    }
}

int sum(int n)
{
    int add = 0;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum(n - 1) + factorial(n) / n;
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    int answer = sum(x);
    printf("Answer is %d\n", answer);

    return 0;
}