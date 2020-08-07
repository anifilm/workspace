#include <stdio.h>
#include <limits.h>     // 자료형의 최대값과 최소값이 정의된 헤더 파일

int main() {

    char num1 = CHAR_MAX;
    short num2 = SHRT_MAX;
    int num3 = INT_MAX;
    long num4 = LONG_MAX;
    long long num5 = LLONG_MAX;

    printf("char(max) num1: %d\n", num1);            // char      -> %d
    printf("short(max) num2: %d\n", num2);           // short     -> %d
    printf("int(max) num3: %d\n", num3);             // int       -> %d
    printf("long(max) num4: %ld\n", num4);           // long      -> %ld
    printf("long long(max) num5: %lld\n", num5);     // long long -> %lld

    unsigned char num6 = UCHAR_MAX;
    unsigned short num7 = USHRT_MAX;
    unsigned int num8 = UINT_MAX;
    unsigned long num9 = ULONG_MAX;
    unsigned long long num10 = ULLONG_MAX;

    printf("unsigned char(max) num6: %u\n", num5);            // unsigned char      -> %u
    printf("unsigned short(max) num7: %u\n", num6);           // unsigned short     -> %u
    printf("unsigned int(max) num8: %u\n", num7);             // unsigned int       -> %u
    printf("unsigned long(max) num9: %lu\n", num8);           // unsigned long      -> %lu
    printf("unsigned long long(max) num10: %llu\n", num9);    // unsigned long long -> %llu

    return 0;
}
