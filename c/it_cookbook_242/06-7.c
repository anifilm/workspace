#include <stdio.h>

int main() {

    int num;

    do {
        printf("Enter a number to be converted. (0 to quit): ");
        scanf("%d", &num);
        printf("%d is 0x%x in hexadecimal.\n", num, num);
    } while (num > 0);

    return 0;
}
