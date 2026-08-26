#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Sylhet Engineering College";
    int count = 0;
    for (int i = 0; str[i] > '\0'; i++)
    {
        if (str[i] == 'e' || str[i] == 'E')
        {
            count++;
        }
    }
    printf("Frequency of e is %d", count);
    return 0;
}
