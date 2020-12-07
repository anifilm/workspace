/* 문제 16-1 [2차원 배열의 활용]
문제 1
가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여 구구단 중 2단, 3단, 4단
을 다음과 같이 저장하자.
*/
#include <stdio.h>

int main() {

    int arr[3][9];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 9; j++) {
            arr[i][j] = (i + 2) * (j + 1);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 9; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
