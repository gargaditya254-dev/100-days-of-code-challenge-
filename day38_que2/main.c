Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int symmetric = 1;

    scanf("%d", &n);

    // Read matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}
