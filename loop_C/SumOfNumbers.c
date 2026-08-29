#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int number[n];
    int sum = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + number[i];
    }

    printf("Sum: %d", sum);
    return 0;
}
