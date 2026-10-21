Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int palindrome = 1;

    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    // Remove newline
    if (length > 0 && str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
