// 2차원 배열 할당하기
#include <stdio.h>
#include <stdlib.h>

int main() {

    int width, height;

    printf("배열 행 크기: ");
    scanf("%d", &width);

    printf("배열 열 크기: ");
    scanf("%d", &height);

    int(*arr)[width] = (int(*)[width])malloc(sizeof(int) * height * width);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int data;
            printf("arr[%d][%d] 배열에 저장할 정수를 입력\n", i, j);
            scanf("%d", &data);
            arr[i][j] = data;
        }
    }
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    free(arr);
    return 0;
}
