Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main()
{
    int nums[100];
    int n, k;
    int i, j;
    int sum, maxLength = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        sum = 0;

        for (j = i; j < n; j++)
        {
            sum = sum + nums[j];

            if (sum == k)
            {
                if (j - i + 1 > maxLength)
                {
                    maxLength = j - i + 1;
                }
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}
