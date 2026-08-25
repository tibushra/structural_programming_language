#include <stdio.h>
#include <math.h>

// 5^2+6^3+7^4....+n^(n-3)

double power(int n)
{

    if (n == 5)
    {
        return pow(5, 2);
    }
    else
    {
        return pow(n, n - 3) + power(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter a number greater than 4:");
    scanf("%d", &n);

    double answer = power(n);
    printf("%.0f\n", answer);

    return 0;
}