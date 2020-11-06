#include <stdio.h>

int main() {

    int i, j, arr[2][3];
    // int* p = arr;    // 오류 발생
    int (*p)[3] = arr;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            p[i][j] = i * i + j * j;
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
