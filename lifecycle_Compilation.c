#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main() {
    int first_num;
    int second_num;
    int choice;
    int result;

    printf("Enter first number: ");
    scanf("%d", &first_num);

    printf("Enter second number: ");
    scanf("%d", &second_num);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = addition(first_num, second_num);
            printf("Result = %d\n", result);
            break;

        case 2:
            result = subtraction(first_num, second_num);
            printf("Result = %d\n", result);
            break;

        case 3:
            result = multiplication(first_num, second_num);
            printf("Result = %d\n", result);
            break;

        case 4:
            if (second_num != 0)
                printf("Result = %d\n", division(first_num, second_num));
            else
                printf("Second number has to be greater than zero.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}