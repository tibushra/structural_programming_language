#include <stdio.h>
int sum(int a, int b)
{
    int result = 0;
    result = a + b;
    return result;
}

int binomial(int a)
{
    int result = 0;
    result = a * a + 2 * a + 5;
    return result;
}

int squareSum(int a)
{
    int result = 0;

    for (int i = 1; i <= a; i++)
    {
        result = result + i * i;
    }
    return result;
}

int factorial(int n)
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
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int answer1 = sum(x, y);
    printf("The sum of x & y is %d\n", answer1);

    int z;
    scanf("%d", &z);
    int answer2 = binomial(z);
    printf("The result is %d\n", answer2);

    int s;
    scanf("%d", &s);
    int answer3 = squareSum(s);
    printf("Result %d\n", answer3);

    int f;
    scanf("%d", &f);
    int answer4 = factorial(f);
    printf("Factorial of f is %d\n", answer4);

    int n;
    scanf("%d", &n);
    int r;
    scanf("%d", &r);
    int answer5 = factorial(n) / (factorial(r) * factorial(n - r));
    printf("ncr %d\n", answer5);
    return 0;
}
