Check if two strings are anagrams of each other.
#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int count[256] = {0};
    int i;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        count[(unsigned char)str1[i]]++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        count[(unsigned char)str2[i]]--;
    }

    // Check frequencies
    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
