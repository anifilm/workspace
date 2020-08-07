#include <stdio.h>

int main() {

    char num1 = -10;                        // 1바이트 부호 있는 정수형
    short num2 = 30000;                     // 2바이트 부호 있는 정수형
    int num3 = -1234567890;                 // 4바이트 부호있는 정수형
    long num4 = 1234567890;                 // 4바이트 부호 있는 정수형
    long long num5 = -1234567890123456789;  // 8바이트 부호 있는 정수형

    printf("char num1: %d\n", num1);            // char      -> %d
    printf("short num2: %d\n", num2);           // short     -> %d
    printf("int num3: %d\n", num3);             // int       -> %d
    printf("long num4: %ld\n", num4);           // long      -> %ld
    printf("long long num5: %lld\n", num5);     // long long -> %lld

    return 0;
}
