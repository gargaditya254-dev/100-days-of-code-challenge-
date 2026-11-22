Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int product, maxProduct;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maxProduct = arr[0] * arr[1];

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            product = arr[i] * arr[j];

            if (product > maxProduct)
            {
                maxProduct = product;
            }
        }
    }

    printf("%d", maxProduct);

    return 0;
}
