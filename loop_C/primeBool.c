#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    bool flag = true;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime");
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        printf("The number is prime");
    }
    return 0;
}