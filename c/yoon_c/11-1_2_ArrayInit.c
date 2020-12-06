// 배열! 선언과 동시에 초기화하기
#include <stdio.h>

int main() {

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2};
    int arr3[] = {1, 2, 3, 4, 5, 6, 7};
    int arr1Len, arr2Len, arr3Len, i;

    printf("배열 arr1의 크기: %d\n", sizeof(arr1));
    printf("배열 arr2의 크기: %d\n", sizeof(arr2));
    printf("배열 arr3의 크기: %d\n", sizeof(arr3));
    printf("\n");

    arr1Len = sizeof(arr1) / sizeof(int);     // 배열 arr1의 길이 계산
    arr2Len = sizeof(arr2) / sizeof(int);     // 배열 arr2의 길이 계산
    arr3Len = sizeof(arr3) / sizeof(int);     // 배열 arr3의 길이 계산

    for (i = 0; i < arr1Len; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    for (i = 0; i < arr2Len; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    for (i = 0; i < arr3Len; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    return 0;
}
