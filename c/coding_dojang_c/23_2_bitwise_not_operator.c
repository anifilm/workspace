#include <stdio.h>

int main() {

    unsigned char num1 = 162;        // 1010 0010
    unsigned char num2;

    num2 = ~num1;   // 1010 0010 NOT -> 0101 1101

    printf("num2: %u\n", num2);      // 93

    return 0;
}
