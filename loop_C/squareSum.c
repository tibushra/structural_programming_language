#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    for (i = 1; i < n; i++)
    {
        printf("%dx%d+", i, i);
        sum = sum + (i * i);
    }
    if (i == n)
    {   
        sum += (i * i);
        printf("%dx%d=%d", i, i, sum);
    }

    return 0;
}