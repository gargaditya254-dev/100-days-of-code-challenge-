Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int sum = 0;

    scanf("%d", &n);

    // Read matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
