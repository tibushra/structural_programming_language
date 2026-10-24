#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    puts("Enter a string ");
    gets(str);
    //  fgets(str, sizeof(str), stdin);
    int isPalindrome = 1;
    int i, length;

    length = strlen(str);
    for (int i = 0; i <= length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}