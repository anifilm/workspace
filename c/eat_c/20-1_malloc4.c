// 2차원 배열 할당하기 2
#include <stdio.h>
#include <stdlib.h>

void add_one(int width, int (*arr)[width], int height) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++)
            arr[i][j]++;
    }
}

void print_array(int width, int (*arr)[width], int height) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++)
            printf("%d ", arr[i][j]);
    printf("\n");
    }
}

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
            printf("arr[%d][%d] 배열에 저장할 정수를 입력: ", i, j);
            scanf("%d", &data);
            arr[i][j] = data;
        }
    }
    printf("\n");

    printf("----- Array -----\n");
    print_array(width, arr, height);
    printf("----- Add one -----\n");
    add_one(width, arr, height);
    print_array(width, arr, height);

    free(arr);
    return 0;
}
