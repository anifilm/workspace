#include <stdio.h>

int main() {

    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;

    printf("%d\n", num1 > num2 && num3 > num4);    // 1: true && true  -> true
    printf("%d\n", num1 > num2 && num3 < num4);    // 0: true && false -> false

    printf("%d\n", num1 > num2 || num3 < num4);    // 1: true || false  -> true
    printf("%d\n", num1 < num2 || num3 < num4);    // 0: false || false -> false

    printf("%d\n", !(num1 > num2));                // 0: !(true) -> false

    return 0;
}
