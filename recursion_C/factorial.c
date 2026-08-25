#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        fact = fact * n;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int x;
    scanf("%d", &x);
    int answer = factorial(x);
    printf("Factorial of f is %d\n", answer);

    return 0;
}