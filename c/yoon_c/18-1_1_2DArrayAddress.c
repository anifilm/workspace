// 2차원 배열이름이 가리키는 것들은?
#include <stdio.h>

int main() {

    int arr2d[3][3];

    printf("%p\n", arr2d);
    printf("%p\n", arr2d[0]);
    printf("%p\n", &arr2d[0][0]);
    printf("\n");

    printf("%p\n", arr2d[1]);
    printf("%p\n", &arr2d[1][0]);
    printf("\n");

    printf("%p\n", arr2d[2]);
    printf("%p\n", &arr2d[2][0]);
    printf("\n");

    printf("sizeof(arr2d): %d\n", (int)sizeof(arr2d));          // 36: 배열 전체 크기
    printf("sizeof(arr2d[0]): %d\n", (int)sizeof(arr2d[0]));    // 12: 배열 첫 번째 행의 크기
    printf("sizeof(arr2d[1]): %d\n", (int)sizeof(arr2d[1]));    // 12: 배열 두 번째 행의 크기
    printf("sizeof(arr2d[2]): %d\n", (int)sizeof(arr2d[2]));    // 12: 배열 세 번째 행의 크기

    return 0;
}
