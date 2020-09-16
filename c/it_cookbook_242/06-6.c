#include <stdio.h>

int main() {

    int num;

    while (1) {
        printf("Enter a number to be converted. (0 to quit): ");
        scanf("%d", &num);
        if (!(num > 0))
            break;
        printf("%d is 0x%x in hexadecimal.\n", num, num);
    }

    return 0;
}
