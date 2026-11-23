Write a program to take a string input. Change it to sentence case.
#include <stdio.h>

int main()
{
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    // Convert all uppercase letters to lowercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    // Convert first character to uppercase
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    printf("%s", str);

    return 0;
}
