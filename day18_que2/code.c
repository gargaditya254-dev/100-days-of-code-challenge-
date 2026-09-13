Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    printf("HCF = %d\n", hcf);

    return 0;
}
