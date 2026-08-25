#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int avg = 1;
    int a = 1;
    int i = 0;
    for (i = 0; i < (n - 1); i++)
    {
        arr[i] = i + a;

        printf("%dx%d+", arr[i], arr[i]);
        a += i;
        sum = sum + (arr[i] * arr[i]);
    }
    if (i == (n - 1))
    {
        arr[i] = i + a;
        sum = sum + (arr[i] * arr[i]);
        printf("%dx%d", arr[i], arr[i]);
    }
    printf("=%d", sum);
    return 0;
}