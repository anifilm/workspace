#include <stdio.h>

int main() {

    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // 배열을 생성하고 값 할당

    printf("numArr sizeof: %d\n", sizeof(numArr));                      // 40 -> 4바이트 크기의 요소가 10개인 배열의 크기
    printf("numArr length: %d\n", sizeof(numArr) / sizeof(numArr[0]));  // 10 -> 전체 크기를 요소의 크기로 나누어 계산
                                                                        // sizeof(numArr) / sizeof(int) 와 같이 자료형 크기로도 가능

    return 0;
}
