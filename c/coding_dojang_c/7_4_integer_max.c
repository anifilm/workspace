#include <stdio.h>
#include <limits.h>     // 자료형의 최대값과 최소값이 정의된 헤더 파일

int main() {

    char num1 = CHAR_MAX;                           // 127
    short num2 = SHRT_MAX;                          // 32767
    int num3 = INT_MAX;                             // 2147483647
    long num4 = LONG_MAX;                           // 2147483647
    long long num5 = LLONG_MAX;                     // 9223372036854775807

    printf("char(max) num1: %d\n", num1);           // char      -> %d
    printf("short(max) num2: %d\n", num2);          // short     -> %d
    printf("int(max) num3: %d\n", num3);            // int       -> %d
    printf("long(max) num4: %ld\n", num4);          // long      -> %ld
    printf("long long(max) num5: %lld\n", num5);    // long long -> %lld

    unsigned char num6 = UCHAR_MAX;                 // 255
    unsigned short num7 = USHRT_MAX;                // 65535
    unsigned int num8 = UINT_MAX;                   // 4294967295
    unsigned long num9 = ULONG_MAX;                 // 4294967295
    unsigned long long num10 = ULLONG_MAX;          // 18446744073709551615

    printf("unsigned char(max) num6: %u\n", num6);            // unsigned char      -> %u
    printf("unsigned short(max) num7: %u\n", num7);           // unsigned short     -> %u
    printf("unsigned int(max) num8: %u\n", num8);             // unsigned int       -> %u
    printf("unsigned long(max) num9: %lu\n", num9);           // unsigned long      -> %lu
    printf("unsigned long long(max) num10: %llu\n", num10);   // unsigned long long -> %llu

    return 0;
}
