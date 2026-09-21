#include <stdio.h>
int add(int a, int b)
{
    int result = 0;
    result = a + b;
    return result;
}
int main()
{
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int answer = add(x, y);
    printf("%d", answer);
    return 0;
}