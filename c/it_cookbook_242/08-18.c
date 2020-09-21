#include <stdio.h>

void reverse(int n) {
    if (n != 0) {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    reverse(num);
    printf("\n");

    return 0;
}
