#include <stdio.h>

int main() {

    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // 배열을 생성하고 값 할당

    int length = sizeof(numArr) / sizeof(numArr[0]);    // 배열의 크기를 계산

    for (int i = 0; i < length; i++) {    // 배열의 요소 개수만큼 반복
        printf("numArr[%d]: %d\n", i, numArr[i]);     // 배열의 인덱스에 반복문의 변수 i를 지정
    }

    return 0;
}
