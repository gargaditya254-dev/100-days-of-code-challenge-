Find the longest word in a sentence.
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int start = 0, length = 0;
    int maxStart = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    for (i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
