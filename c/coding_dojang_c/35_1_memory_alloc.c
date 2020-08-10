#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일

int main() {

    int num1 = 20;      // int형 변수 선언
    int *numPtr1;       // int형 포인터 선언

    numPtr1 = &num1;    // num1의 메모리 주소를 numPtr1에 할당

    int *numPtr2;       // int형 포인터 선언

    numPtr2 = malloc(sizeof(int));  // int의 크기 4바이트 만큼 동적 메모리 할당

    printf("numPtr1: %p\n", numPtr1);        // 변수 num1의 메모리 주소 출력
    printf("numPtr2: %p\n", numPtr2);        // 새로 할당한 메모리 주소 출력

    free(numPtr2);      // 동적으로 할당한 메모리 해제

    return 0;
}
