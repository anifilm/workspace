// 2차원 배열의 값을 포인터를 사용해서 출력하기
#include <stdio.h>

int main() {

    int i, j;
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            // printf("%d ", arr[i][j]);
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
