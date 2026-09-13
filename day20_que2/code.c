Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binary, result = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0) {
            result = result + 1 * place;
        } else {
            result = result + 0 * place;
        }

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement = %lld\n", result);

    return 0;
}
