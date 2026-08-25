#include <stdio.h>
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int x = (n - r);
    int nfact = 1;
    int rfact = 1;
    int xfact = 1;

    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    for (int i = 1; i <= x; i++)
    {
        xfact = xfact * i;
    }
    printf("%d", nfact / (rfact * xfact));

    return 0;
}