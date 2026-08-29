#include <stdio.h>
int main()
{
    int cleaningDay;
    printf("Enter the day: ");
    scanf("%d", &cleaningDay);
    int day = cleaningDay % 10;
    int remainingDay = 10 - day;
    printf("%d", remainingDay);
    return 0;
}
