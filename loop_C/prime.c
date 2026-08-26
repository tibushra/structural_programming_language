#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime");

            break;
        }
    }
    if (i == n)
    {
        printf("The number is prime");
    }
    return 0;
}