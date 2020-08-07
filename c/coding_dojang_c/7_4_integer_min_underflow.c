#include <stdio.h>
#include <limits.h>     // 자료형의 최대값과 최소값이 정의된 헤더 파일

int main() {

    char num1 = CHAR_MIN - 1;
    short num2 = SHRT_MIN - 1;
    int num3 = INT_MIN - 1;
    long num4 = LONG_MIN - 1;
    long long num5 = LLONG_MIN - 1;

    printf("char(min) num1: %d\n", num1);            // char      -> %d
    printf("short(min) num2: %d\n", num2);           // short     -> %d
    printf("int(min) num3: %d\n", num3);             // int       -> %d
    printf("long(min) num4: %ld\n", num4);           // long      -> %ld
    printf("long long(min) num5: %lld\n", num5);     // long long -> %lld

    unsigned char num6 = 0 - 1;
    unsigned short num7 = 0 - 1;
    unsigned int num8 = 0 - 1;
    unsigned long num9 = 0 - 1;
    unsigned long long num10 = 0 - 1;

    printf("unsigned char(min) num6: %u\n", num5);            // unsigned char      -> %u
    printf("unsigned short(min) num7: %u\n", num6);           // unsigned short     -> %u
    printf("unsigned int(min) num8: %u\n", num7);             // unsigned int       -> %u
    printf("unsigned long(min) num9: %lu\n", num8);           // unsigned long      -> %lu
    printf("unsigned long long(min) num10: %llu\n", num9);    // unsigned long long -> %llu

    return 0;
}
