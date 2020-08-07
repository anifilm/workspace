#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 0;

    if (num1 && num2)      // true && false -> false
        printf("true\n");
    else
        printf("false\n");

    if (num1 || num2)      // true || false -> true
        printf("true\n");
    else
        printf("false\n");

    if (!num1)             // !(true) -> false
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
