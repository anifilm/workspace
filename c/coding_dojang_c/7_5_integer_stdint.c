#include <stdio.h>
#include <stdint.h>     // 크기별로 정수 자료형이 정의된 헤더 파일 (C99 표준에 추가)

int main() {

    int8_t num1 = INT8_MAX;                         // 8비트(1바이트)  char
    int16_t num2 = INT16_MAX;                       // 16비트(2바이트) short
    int32_t num3 = INT32_MAX;                       // 32비트(4바이트) int
    int64_t num4 = INT64_MAX;                       // 64비트(8바이트) long long

    printf("int8_t(max) num1: %d\n", num1);         // int8_t    -> %d
    printf("int16_t(max) num2: %d\n", num2);        // int16_t   -> %d
    printf("int32_t(max) num3: %d\n", num3);        // int32_t   -> %d
    printf("int64_t(max) num4: %lld\n", num4);      // int64_t   -> %lld

    uint8_t num5 = UINT8_MAX;                       // 8비트(1바이트)  unsigned char
    uint16_t num6 = UINT16_MAX;                     // 16비트(2바이트) unsigned short
    uint32_t num7 = UINT32_MAX;                     // 32비트(4바이트) unsigned int
    uint64_t num8 = UINT64_MAX;                     // 64비트(8바이트) unsugned long long

    printf("uint8_t(max) num5: %u\n", num5);        // uint8_t   -> %u
    printf("uint16_t(max) num6: %u\n", num6);       // uint16_t  -> %u
    printf("uint32_t(max) num7: %u\n", num7);       // uint32_t  -> %u
    printf("uint64_t(max) num8: %llu\n", num8);     // uint64_t  -> %llu

    return 0;
}
