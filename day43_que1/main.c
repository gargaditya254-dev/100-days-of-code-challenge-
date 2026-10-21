Question: Reverse a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;

    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    // Remove newline added by fgets
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    // Print in reverse
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
