#include <stdio.h>

int main()
{
    int marks[] = {4, 99, 23, 89, 90};
    for (int i = 0; i < (sizeof(marks) / sizeof(marks[0])); i++)
    {
        if (marks[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}