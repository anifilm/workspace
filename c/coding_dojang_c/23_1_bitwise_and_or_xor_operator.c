#include <stdio.h>

int main() {

    unsigned char num1 = 1;     // 0000 0001
    unsigned char num2 = 3;     // 0000 0011

    printf("%d\n", num1 & num2);    // 01 11  AND  -> 01 (1)
    printf("%d\n", num1 | num2);    // 01 11  OR   -> 11 (3)
    printf("%d\n", num1 ^ num2);    // 01 11  XOR  -> 10 (2)

    return 0;
}
