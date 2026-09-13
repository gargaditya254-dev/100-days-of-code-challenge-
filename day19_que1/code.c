Write a program to find the LCM of two numbers.
  #include <stdio.h>

int main() {
    int a, b, lcm, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    lcm = max;

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    printf("LCM = %d\n", lcm);

    return 0;
}
