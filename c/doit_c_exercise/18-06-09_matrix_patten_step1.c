// N차 행렬에 숫자 채우기
#include <stdio.h>
#define MAX_COUNT 9

int main() {

    int num[MAX_COUNT][MAX_COUNT];  // (x, y) 위치를 배열은 num[y][x]로 사용
    int edge_num, edge_base;
    int size, i, x = 0, y = 0, flag = 1, step = 0;

    printf("크기를 입력하세요: ");
    scanf("%d", &size);

    edge_num = edge_base = size - 1;

    for (i = 0; i < size * size; i++) {
        num[y][x] = i + 1;

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
            printf(" %2d ", num[y][x]);
        printf("\n");
    }

    return 0;
}
