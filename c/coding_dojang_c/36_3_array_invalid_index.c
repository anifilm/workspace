#include <stdio.h>

int main() {

    int numArr[10];   // 크기가 10인 배열을 선언

    numArr[0] = 1;    // 인덱스 0에 값 할당
    numArr[1] = 2;    // 인덱스 1에 값 할당
    numArr[2] = 3;    // 인덱스 2에 값 할당
    numArr[3] = 4;    // 인덱스 3에 값 할당
    numArr[4] = 5;    // 인덱스 4에 값 할당
    numArr[5] = 6;    // 인덱스 5에 값 할당
    numArr[6] = 7;    // 인덱스 6에 값 할당
    numArr[7] = 8;    // 인덱스 7에 값 할당
    numArr[8] = 9;    // 인덱스 8에 값 할당
    numArr[9] = 10;   // 인덱스 9에 값 할당

    printf("numArr[-1]: %d\n", numArr[-1]);       // 음수이므로 잘못된 인덱스
    printf("numArr[10]: %d\n", numArr[10]);       // 배열의 범위를 벗어난 인덱스
    printf("numArr[20]: %d\n", numArr[20]);       // 배열의 범위를 벗어난 인덱스

    return 0;
}
