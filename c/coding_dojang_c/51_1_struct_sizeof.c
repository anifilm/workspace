#include <stdio.h>

struct PacketHeader {
    char flags;         // 1바이트
    int seq;            // 4바이트
};

int main() {

    struct PacketHeader header;

    printf("sizeof(header.flags): %d byte\n", sizeof(header.flags));                 // char는 1바이트
    printf("sizeof(header.seq): %d byte\n", sizeof(header.seq));                     // int는 4바이트
    printf("sizeof(header): %d byte\n", sizeof(header));                             // 구조체 전체 크기는 8바이트
    printf("sizeof(struct PacketHeader): %d byte\n", sizeof(struct PacketHeader));   // 구조체 이름으로 크기 구하기

    return 0;
}
