#include <stdio.h>
void sumOfN(int n)
{
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
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    sumOfN(n);
    // printf("%d",result);

    return 0;
}