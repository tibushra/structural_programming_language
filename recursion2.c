#include <stdio.h>
// #include <math.h>

double power(int a)
{
  
    if (a == 5)
    {
        return 5 * 5;
    }
    else
    {
        // fact = (fact * n);
        // result = result / n;
        return power((a - 1) * ((a - 3)-1));
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    double answer4 = power(a);
    printf("%.0f\n", answer4);

    return 0;
}