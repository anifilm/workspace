// 3차원 배열의 논리적 구조
#include <stdio.h>

int main() {

    int arr1[2][3][4];
    double arr2[5][5][5];

    printf("높이2, 세로3, 가로4 int형 배열: %d\n", (int)sizeof(arr1));
    printf("높이5, 세로5, 가로5 double형 배열: %d\n", (int)sizeof(arr2));

    return 0;
}
