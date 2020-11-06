#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int* square_array() {
    int i;
    int* p = NULL;

    p = (int*)malloc(sizeof(int) * MAX);
    // p = (int*)calloc(sizeof(int), MAX);     // malloc과 같이 메모리 동적 할당을 하고 자동으로 0으로 초기화 됨
    if (p != NULL) {
        for (i = 0; i < MAX; i++)
            p[i] = i * i;
    }
    return p;
}

int main() {

    int i, *arr = square_array();

    for (i = 0; i < MAX; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
