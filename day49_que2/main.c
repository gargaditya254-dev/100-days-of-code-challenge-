Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char str[200], pat[100];
    int freq[256] = {0};
    int window[256] = {0};

    int start = 0, minStart = 0;
    int minLength = INT_MAX;
    int count = 0;
    int i;

    scanf("%s", str);
    scanf("%s", pat);

    int len1 = strlen(str);
    int len2 = strlen(pat);

    for (i = 0; i < len2; i++)
    {
        freq[(unsigned char)pat[i]]++;
    }

    for (i = 0; i < len1; i++)
    {
        window[(unsigned char)str[i]]++;

        if (freq[(unsigned char)str[i]] != 0 &&
            window[(unsigned char)str[i]] <= freq[(unsigned char)str[i]])
        {
            count++;
        }

        if (count == len2)
        {
            while (freq[(unsigned char)str[start]] == 0 ||
                   window[(unsigned char)str[start]] >
                   freq[(unsigned char)str[start]])
            {
                if (window[(unsigned char)str[start]] >
                    freq[(unsigned char)str[start]])
                {
                    window[(unsigned char)str[start]]--;
                }

                start++;
            }

            int length = i - start + 1;

            if (length < minLength)
            {
                minLength = length;
                minStart = start;
            }
        }
    }

    if (minLength == INT_MAX)
    {
        printf("No window found");
    }
    else
    {
        for (i = minStart; i < minStart + minLength; i++)
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
