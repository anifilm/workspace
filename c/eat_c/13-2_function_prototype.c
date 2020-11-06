// 함수의 원형
#include <stdio.h>

void swap(int* a, int* b);

int main() {

    int i, j;
    i = 3;
    j = 5;

    printf("Swap 이전 : i = %d, j = %d\n", i, j);

    swap(&i, &j);
    printf("Swap 이후 : i = %d, j = %d\n", i, j);

    return 0;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
