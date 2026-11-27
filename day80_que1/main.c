Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100];
    char word[100];
    char temp[100];
    int count = 0;

    scanf("%s", filename);
    scanf("%s", word);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while (fscanf(fp, "%s", temp) == 1)
    {
        if (strcmp(temp, word) == 0)
        {
            count++;
        }
    }

    fclose(fp);

    printf("%d", count);

    return 0;
}
