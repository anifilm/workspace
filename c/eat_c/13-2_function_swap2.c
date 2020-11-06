// 두 변수의 값을 교환하는 함수 2
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int i, j;
    i = 3;
    j = 5;

    printf("SWAP 이전: i: %d, j: %d\n", i, j);

    swap(&i, &j); // swap 함수 호출~~
    printf("SWAP 이후: i: %d, j: %d\n", i, j);

    return 0;
}
