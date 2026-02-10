#include <stdio.h>

int factorial(int n);
int addNumbers(int a, int b);

int main() {
    int number;
    int sum;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    printf("Factorials from 1 to %d:\n", number);
    for (int i = 1; i <= number; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    sum = addNumbers(number, 10);
    printf("%d + 10 = %d\n", number, sum);

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int addNumbers(int a, int b) {
    return a + b;
}
