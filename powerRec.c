#include <stdio.h>
#include <math.h>

double power(int n)
{

    if (n == 5)
    {
        return pow(5, 2);
    }
    else
    {
        // fact = (fact * n);
        // result = result / n;
        return pow(n, n - 3) + power(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    double answer4 = power(n);
    printf("%.0f\n", answer4);

    return 0;
}