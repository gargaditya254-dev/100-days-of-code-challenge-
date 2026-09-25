Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int n, digit;
    int count[10] = {0};
    int maxCount = 0, mostFrequent = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        count[0] = 1;
    }

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    printf("Most frequent digit = %d\n", mostFrequent);
    printf("It occurs %d times\n", maxCount);

    return 0;
}
