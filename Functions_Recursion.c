#include <stdio.h>

long long factorial(int n);

int main() {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    printf("numbers in %d! = ", number);
    for (int i = 1; i <= number; i++)
        printf("%d%s", i, (i != number) ? ", " : "\n");

    printf("%d! = %lld\n", number, factorial(number));

    return 0;
}

long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
