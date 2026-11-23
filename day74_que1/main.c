Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main()
{
    FILE *fp;
    int freq[256] = {0};
    int ch, i;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        freq[ch]++;
    }

    fclose(fp);

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}
