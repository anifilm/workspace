#include <stdio.h>

int main() {

    int num;

    printf("Enter a number to be converted. (0 to quit): ");
    scanf("%d", &num);

    while (num > 0) {
        printf("%d is 0x%x in hexadecimal.\n", num, num);
        printf("Enter a number to be converted. (0 to quit): ");
        scanf("%d", &num);
    }

    return 0;
}
