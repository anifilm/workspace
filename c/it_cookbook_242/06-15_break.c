#include <stdio.h>
#define TRUE   1
#define FALSE  0

int main() {

    int max, num, i, is_prime;

    printf("Enter an integer larger than 1: ");
    scanf("%d", &max);

    for (num = 2; num <= max; num++) {
        is_prime = TRUE;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = FALSE;
                break;
            }
        }
        is_prime ? printf("%d is a prime number.\n", num) : printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
