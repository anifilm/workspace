// N차 행렬에 숫자 채우기
#include <stdio.h>
#include <malloc.h>

int main() {

    int **p;    // 행렬을 저장하기 위한 2차원 포인터
    int edge_num, edge_base;
    int size, i, x = 0, y = 0, flag = 1, step = 0;

    printf("크기를 입력하세요: ");
    scanf("%d", &size);

    edge_num = edge_base = size - 1;

    p = (int **)malloc(sizeof(int *) * size);
    for (i = 0; i < size; i++)
        *(p + i) = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size * size; i++) {
        *(*(p + y) + x) = i + 1;

        if (i == edge_num) {
            if (step && step % 2 == 0) edge_base--;
            edge_num += edge_base;
            step++;
            if (step % 2 == 0) flag = flag * -1;
        }

        if (step % 2 == 0) x = x + flag;
        else y = y + flag;
    }

    for (y = 0; y < size; y++) {
        for (x = 0; x < size; x++)
            printf(" %2d ", *(*(p + y) + x));
        printf("\n");
    }

    for (i = 0; i < size; i++)
        free(*(p + i));
    free(p);

    return 0;
}
