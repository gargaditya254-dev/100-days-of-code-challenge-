Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int m, n;
    int i, j, k;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    for (i = 0; i < m + n; i++)
    {
        printf("%d", merged[i]);

        if (i < m + n - 1)
            printf(" ");
    }

    return 0;
}
