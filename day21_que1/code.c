Write a program to swap the first and last digit of a number.
  #include <stdio.h>

int main() {
    int n, first, last, divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Number after swapping = %d\n", n);
        return 0;
    }

    last = n % 10;

    while (n / divisor >= 10) {
        divisor = divisor * 10;
    }

    first = n / divisor;
    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", result);

    return 0;
}
