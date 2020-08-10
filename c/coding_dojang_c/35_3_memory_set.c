#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수가 선언된 헤더 파일
#include <string.h>     // memset 함수가 선언된 헤더 파일

int main() {

    long long *numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트 만큼 동적 메모리 할당

    memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트 만큼 0x27로 설정

    printf("numPtr: 0x%llx\n", *numPtr);    // 포인터를 역참조하여 메모리에 저장된 값을 출력

    free(numPtr);       // 동적으로 할당한 메모리 해제

    return 0;
}
