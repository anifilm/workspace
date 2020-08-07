#include <stdio.h>

int main() {

    float num1 = 0.1f;
    double num2 = 3667.215820;
    long double num3 = 9.327513l;

    printf("float: %d byte\n", sizeof(num1));         // 32bit  -> 4byte
    printf("double: %d byte\n", sizeof(num2));        // 64bit  -> 8byte
    printf("long double: %d byte\n", sizeof(num3));   // 128bit -> 16byte

    return 0;
}
