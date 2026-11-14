Print the initials of a name.
#include <stdio.h>

int main()
{
    char name[200];
    int i = 0;

    fgets(name, sizeof(name), stdin);

    // First character is an initial
    if (name[0] != ' ')
    {
        printf("%c ", name[0]);
    }

    // Character after every space is an initial
    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' &&
            name[i + 1] != '\0' && name[i + 1] != '\n')
        {
            printf("%c ", name[i + 1]);
        }

        i++;
    }

    return 0;
}
