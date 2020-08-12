#include <stdio.h>
#include <stddef.h>     // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader {
    char flags;         // 1바이트
    int seq;            // 4바이트
};

int main() {

    printf("offsetof(struct PacketHeader, flags): %d\n", offsetof(struct PacketHeader, flags));
    printf("offsetof(struct PacketHeader, seq): %d\n", offsetof(struct PacketHeader, seq));

    return 0;
}
