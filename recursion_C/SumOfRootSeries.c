#include <stdio.h>
#include <math.h>
float root(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sqrt(n) + root(n - 1);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    float answer = root(x);
    printf("Root Series sum is %f\n", answer);

    return 0;
}