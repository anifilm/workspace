// 2차원 배열의 메모리상 할당의 형태
#include <stdio.h>

int main() {

    int arr[3][2];
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            printf("%p\n", &arr[i][j]);

    return 0;
}
