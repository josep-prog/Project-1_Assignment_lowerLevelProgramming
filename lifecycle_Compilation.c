#include <stdio.h>

int main() {
    int a, b, choice, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = a + b;
        printf("Result = %d\n", result);
    }
    else if (choice == 2) {
        if (b == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            result = a / b;
            printf("Result = %d\n", result);
        }
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
