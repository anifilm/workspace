#include <stdio.h>

int main() {

    printf("char: %d byte\n", sizeof(char));            // 8bit  -> 1byte
    printf("short: %d byte\n", sizeof(short));          // 16bit -> 2byte
    printf("int: %d byte\n", sizeof(int));              // 32bit -> 4byte
    printf("long: %d byte\n", sizeof(long));            // 32bit -> 4byte
    printf("long long: %d byte\n", sizeof(long long));  // 64bit -> 8byte

    return 0;
}
