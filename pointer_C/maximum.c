#include <stdio.h>

int maximum(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    return *y;
}

int main()
{
    int x = 5, y = 6;
    printf("%d", maximum(&x, &y));
    return 0;
}