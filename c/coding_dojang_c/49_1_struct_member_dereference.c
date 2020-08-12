#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

struct Data {           // 구조체 정의
    char c1;
    int *numPtr;        // 포인터
};

int main() {

    int num1 = 10;
    struct Data d1;     // 구조체 변수
    struct Data *d2 = malloc(sizeof(struct Data));  // 구조체 포인터에 메모리 할당

    d1.numPtr = &num1;
    d2->numPtr = &num1;

    printf("*d1.numPtr: %d\n", *d1.numPtr);         // 구조체의 멤버를 역참조
    printf("*d2->numPtr: %d\n", *d2->numPtr);       // 구조체 포인터의 멤버를 역참조

    d2->c1 = 'a';
    printf("(*d2).c1: %c\n", (*d2).c1);             // 구조체 포인터를 역참조하여 c1에 접근

    printf("*(*d2).numPtr: %d\n", *(*d2).numPtr);   // 구조체 포인터를 역참조혀여 numPtr에 접근한 뒤 다시 역참조
                                                    // *d2->numPtr 과 같음
    free(d2);   // 동적 메모리 해제

    return 0;
}
