// 공용체의 유용함은 다양한 접근방식을 제공하는데 있습니다.
#include <stdio.h>

typedef struct dbshort {
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf {
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

int main() {

    RDBuf buf;

    printf("정수 입력: ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트: %u\n", buf.sBuf.upper);
    printf("하위 2바이트: %u\n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드: %c\n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드: %c\n", buf.bBuf[3]);

    return 0;
}

/*

[공용체의 유용함]
하나의 메모리 공간을 둘 이상의 방식으로 접근할 수 있다.

17행에 선언된 공용체 변수는 메모리 공간에 다음의 형태로 할당되고 공유가 된다.

buf
|   1 byte  |   1 byte  |   1 byte  |   1 byte  |
|           |           |           |           |
|<-bBuf[0]->|<-bBuf[1]->|<-bBuf[2]->|<-bBuf[3]->|
|                       |                       |
|<--    sBuf.upper   -->|<--    sBuf.lower   -->|
|                       |                       |
|<----                             iBuf    ---->|
|                                               |   > [그림 23-2: 공용체 변수의 할당과 공유]

*/
