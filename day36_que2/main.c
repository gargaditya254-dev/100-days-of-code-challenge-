Find the sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, sum = 0;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of all elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
