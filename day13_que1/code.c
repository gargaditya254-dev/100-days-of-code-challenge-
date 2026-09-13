

Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
  #include <stdio.h>

int main() {
    int a, b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Cannot divide by zero\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Cannot find remainder with zero\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
