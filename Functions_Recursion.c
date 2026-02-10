#include <stdio.h>

int factorial(int n);
int addNumbers(int a, int b);

int main() {
    int number;
    int sum;

    printHello();

    printf("Enter a positive number to calculate factorial: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d\n", number, factorial(number));

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