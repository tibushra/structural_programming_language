#include <stdio.h>
int sum(int a)
{
    int result = 0;
    result = a * a + 2 * a + 5;
    return result;
}
int main()
{
    int x;
    scanf("%d", &x);
    int answer = sum(x);
    printf("%d", answer);
    return 0;
}