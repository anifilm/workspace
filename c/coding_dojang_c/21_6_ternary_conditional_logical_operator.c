#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 0;

    printf("%s\n", (num1 && num2) ? "true" : "false");    // true && false -> false
    printf("%s\n", (num1 || num2) ? "true" : "false");    // true || false -> true

    return 0;
}
