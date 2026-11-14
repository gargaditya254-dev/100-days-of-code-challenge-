Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        // Skip spaces
        if (str[i] == ' ')
        {
            printf(" ");
            i++;
            continue;
        }

        start = i;

        // Find end of current word
        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        // Print current word in reverse
        for (j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }

        if (str[i] == '\n' || str[i] == '\0')
            break;
    }

    return 0;
}
