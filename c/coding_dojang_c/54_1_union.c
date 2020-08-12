#include <stdio.h>
#include <string.h>     // strcpy 함수가 선언된 헤더 파일

union Box {         // 공용체 정의
    short candy;    // 2바이트
    float snack;    // 4바이트
    char doll[8];   // 8바이트
};

int main() {

    union Box b1;   // 공용체 변수 선언

    printf("sizeof(b1): %d\n", sizeof(b1));    // 공용체의 전체 크기는 가장 큰 자료형의 크기

    strcpy(b1.doll, "bear");                   // doll에 문자열 bear 복사

    printf("b1.candy: %d\n", b1.candy);
    printf("b1.snack: %f\n", b1.snack);
    printf("b1.doll: %s\n", b1.doll);

    return 0;
}
