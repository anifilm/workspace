/* 도전! 프로그래밍 3
도전 1
길이가 4 x 4인 int형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와
동일하게 초기화하자. 그리고 배열의 요소들을 오른쪽 방향으로 90º씩 이동시켜서 그 결과를
출력하는 프로그램을 작성해 보자. 참고로 배열이 변경되는 형태는 다음과 같다.
  [그림 20-1: 배열의 회전] 생략...

*/
#include <stdio.h>

void PrintArr(int (*arr)[4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int temp[4][4] = {0};
    int i, j, rot = 0;

    // 배열 출력 1
    PrintArr(arr);

    while (rot < 270) {
        // 배열 회전
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
                temp[i][j] = arr[3 - j][i];
        }
        // 배열 복사
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
                arr[i][j] = temp[i][j];
        }
        // 배열 출력 2, 3, 4
        PrintArr(arr);

        rot += 90;
    }

    return 0;
}
