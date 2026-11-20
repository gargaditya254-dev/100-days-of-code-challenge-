Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i, j, k;
    int maxLength = 0;
    int length, repeat;

    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++)
    {
        length = 0;

        for (j = i; j < n; j++)
        {
            repeat = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if (repeat)
                break;

            length++;

            if (length > maxLength)
                maxLength = length;
        }
    }

    printf("%d", maxLength);

    return 0;
}
