#include <stdio.h>

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
