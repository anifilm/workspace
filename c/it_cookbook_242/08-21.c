#include <stdio.h>

int fib(int n) {
    if (n < 3)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main() {

    int num;

    printf("Enter a number N: ");
    scanf("%d", &num);

    printf("%dth fibonacci number is %d\n", num, fib(num));

    return 0;
}
