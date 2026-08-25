#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int avg = 1;
    int a = 1;
    int b = 1;
    int i = 0;
    for (i = 0; i < (n - 1); i++)
    {
        b = i + a;

        printf("%dx%d+", b, b);
        a += i;
        sum = sum + (b * b);
    }
    if (i == (n - 1))
    {
        b = i + a;
        sum = sum + (b * b);
        printf("%dx%d=%d", b, b, sum);
    }
    // printf("=%d", sum);

    return 0;
}