#include <stdio.h>

int main() {

    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // 배열을 생성하고 값 할당
    int sum = 0;    // 합을 저장할 변수를 0으로 초기화

    int length = sizeof(numArr) / sizeof(numArr[0]);    // 배열의 크기를 계산

    for (int i = 0; i < length; i++) {    // 배열의 요소 개수만큼 반복
        sum += numArr[i];       // sum과 배열의 요소를 더하여 sum에 재할당
    }

    printf("sum: %d\n", sum);

    return 0;
}
