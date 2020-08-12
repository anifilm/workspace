#include <stdio.h>

#pragma pack(push, 1)   // 1바이트 크기로 정렬
struct PacketHeader {
    char flags;         // 1바이트
    int seq;            // 4바이트
};
#pragma pack(pop)       // 정렬 설정을 이전 상태(기본값)로 되돌림

int main() {

    struct PacketHeader header;

    printf("sizeof(header.flags): %d byte\n", sizeof(header.flags));    // char는 1바이트
    printf("sizeof(header.seq): %d byte\n", sizeof(header.seq));        // int는 4바이트
    printf("sizeof(header): %d byte\n", sizeof(header));                // 1바이트 단위로 정렬했으므로 구조체 전체 크기는 5바이트

    return 0;
}
