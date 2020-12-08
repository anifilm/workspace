// 배열 이름 기반의 포인터 연산: 배열 이름에 1을 더한 결과는?
#include <stdio.h>

int main() {

    int arr1[3][2];
    int arr2[2][3];

    printf("arr1    : %p\n", arr1);
    printf("arr1 + 1: %p\n", arr1 + 1);
    printf("arr1 + 2: %p\n", arr1 + 2);
    printf("\n");

    printf("arr2    : %p\n", arr2);
    printf("arr2 + 1: %p\n", arr2 + 1);

    return 0;
}
