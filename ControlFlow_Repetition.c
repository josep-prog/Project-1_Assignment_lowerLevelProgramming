#include <stdio.h>

int main() {
    int choice;
    int number;

    while (1) {
        printf("choose number of your choice\n");
        printf("1. Print even numbers up to N\n");
        printf("2. Print odd numbers up to N\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter a number N: ");
        scanf("%d", &number);

        if (choice == 1) {
            printf("Even numbers up to %d: ", number);
            for (int i = 1; i <= number; i++) {
                if (i % 2 != 0) {
                    continue;
                }
                printf("%d ", i);
            }
            printf("\n");

        } else if (choice == 2) {
            printf("Odd numbers up to %d: ", number);
            for (int i = 1; i <= number; i++) {
                if (i % 2 == 0) {
                    continue;
                }
                printf("%d ", i);
            }
            printf("\n");

        } else {
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}