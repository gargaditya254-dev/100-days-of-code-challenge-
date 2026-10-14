Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int a[10][10];
    int sum[10];
    int rows, cols;
    int i, j;

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++)
    {
        printf("%d\n", sum[i]);
    }

    return 0;
}
