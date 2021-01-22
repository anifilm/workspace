#include <stdio.h>
#define TRUE   1
#define FALSE  0

int is_prime(int n) {
    int divider, remainder, prime = TRUE;
    for (divider = 2; divider < n; divider++) {
        remainder = n % divider;
        if (remainder == 0) {
            prime = FALSE;
            break;
        }
    }
    return prime;
}

int main() {

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("It is a prime number.\n");
    else
        printf("It is NOT a prime number.\n");

    return 0;
}
