#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int i;
    for( i=1; i<=n; i++)
    {
        for( i=1; i<=m; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
