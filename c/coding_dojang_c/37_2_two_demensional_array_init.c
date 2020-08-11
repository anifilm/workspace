#include <stdio.h>

int main() {

    int numArr[3][4] = {0,};        // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언

                       // ↓ 세로 인덱스
    printf("%d\n", numArr[0][0]);   // 세로 인덱스 0, 가로인덱스 0인 요소 출력
    printf("%d\n", numArr[1][2]);   // 세로 인덱스 1, 가로인덱스 2인 요소 출력
    printf("%d\n", numArr[2][0]);   // 세로 인덱스 2, 가로인덱스 0인 요소 출력
    printf("%d\n", numArr[2][3]);   // 세로 인덱스 2, 가로인덱스 2인 요소 출력
                          // ↑ 가로 인덱스
    return 0;
}
