#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    for (i = 1; i < n; i++)
    {
        printf("%d+", i);
        sum = sum + (i);
    }
    if (i == n)
    {
        sum += i;
        printf("%d=%d", i, sum);
    }

    return 0;
}