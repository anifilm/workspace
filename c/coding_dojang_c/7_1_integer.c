#include <stdio.h>

int main() {

    char num1 = -10;                            // 8비트(1바이트)
    short num2 = 30000;                         // 16비트(2바이트)
    int num3 = -1234567890;                     // 32비트(4바이트)
    long num4 = 1234567890;                     // 32비트(4바이트)
    long long num5 = -1234567890123456789;      // 64비트(8바이트)

    printf("char num1: %d\n", num1);            // char      -> %d
    printf("short num2: %d\n", num2);           // short     -> %d
    printf("int num3: %d\n", num3);             // int       -> %d
    printf("long num4: %ld\n", num4);           // long      -> %ld
    printf("long long num5: %lld\n", num5);     // long long -> %lld

    return 0;
}
