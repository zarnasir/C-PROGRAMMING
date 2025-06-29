#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void displayFactorial(int n) {
    if (n < 0)
        printf("Factorial not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", n, factorial(n));
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    displayFactorial(n);

    return 0;
}
