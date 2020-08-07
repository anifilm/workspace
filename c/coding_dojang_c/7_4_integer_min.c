#include <stdio.h>
#include <limits.h>     // 자료형의 최대값과 최소값이 정의된 헤더 파일

int main() {

    char num1 = CHAR_MIN;                           // -128
    short num2 = SHRT_MIN;                          // -32768
    int num3 = INT_MIN;                             // -2147483648
    long num4 = LONG_MIN;                           // -2147483648
    long long num5 = LLONG_MIN;                     // -9223372036854775808

    printf("char(min) num1: %d\n", num1);           // char      -> %d
    printf("short(min) num2: %d\n", num2);          // short     -> %d
    printf("int(min) num3: %d\n", num3);            // int       -> %d
    printf("long(min) num4: %ld\n", num4);          // long      -> %ld
    printf("long long(min) num5: %lld\n", num5);    // long long -> %lld

    return 0;
}
