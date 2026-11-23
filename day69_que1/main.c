Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main()
{
    int arr[100];
    int count[1000] = {0};
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (count[arr[i]] == 1)
        {
            printf("%d", arr[i]);
            return 0;
        }

        count[arr[i]]++;
    }

    return 0;
}
