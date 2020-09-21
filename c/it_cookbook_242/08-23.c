#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for (i = n; i > 0; i--)
        fact *= i;
    return fact;
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num, factorial(num));

	return 0;
}
