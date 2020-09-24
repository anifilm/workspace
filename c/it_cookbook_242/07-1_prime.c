#include <stdio.h>

int mutually_prime(int a, int b) {
    int min, i, prime = 1;
    printf("Entering function, a = %d, b = %d\n", a, b);

    min = (a < b) ? a : b;
    printf("Currently, min is %d\n", min);

    for (i = 2; i <= min; i++)
        if (a % i == 0 && b % i == 0) {
            printf("Inside if.\n");
            prime = 0;
            break;
        }
    return prime;
}

int main() {

    int first, second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    mutually_prime(first, second) ?
        printf("They are mutually prime.\n") :
        printf("They are NOT mutually prime.\n");

    return 0;
}
