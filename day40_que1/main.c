Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, k;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (k = 0; k < rows + cols - 1; k++)
    {
        for (i = 0; i < rows; i++)
        {
            j = k - i;

            if (j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
