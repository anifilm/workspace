#include <stdio.h>

void odd_even(int n) {
    if (n % 2 == 1)
        printf("%d is odd number.\n", n);
    else
        printf("%d is even number.\n", n);
    return;
}

int main() {

    int num;
    printf("Enter an integer: \n");
    scanf("%d", &num);

    odd_even(num);

    return 0;
}
