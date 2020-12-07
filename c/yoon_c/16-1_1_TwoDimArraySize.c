// 다차원 배열을 대표하는 2차원 배열의 선언
#include <stdio.h>

int main() {

    int arr1[3][4];
    int arr2[7][9];

    printf("세로3, 가로4: %d\n", (int)sizeof(arr1));
    printf("세로7, 가로9: %d\n", (int)sizeof(arr2));

    return 0;
}
