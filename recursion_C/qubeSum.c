#include <stdio.h>
#include <math.h>

double power(int n)
{

    if (n == 1)
    {
        return pow(1, 3);
    }
    else
    {
        // fact = (fact * n);
        // result = result / n;
        return pow(n, 3) + power(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    double answer = power(n);
    printf("%.0f\n", answer);

    return 0;
}