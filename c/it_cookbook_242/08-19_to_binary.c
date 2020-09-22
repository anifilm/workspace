#include <stdio.h>

void to_binary(int n) {
    if (n == 0)
        return;
    else {
        to_binary(n / 2);
        printf("%d", (n % 2));
    }
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    to_binary(num);
    printf("\n");

    return 0;
}
