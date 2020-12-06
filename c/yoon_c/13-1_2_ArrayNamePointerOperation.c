// 1차원 배열 이름의 포인터 형과 배열 이름을 대상으로 하는 * 연산
#include <stdio.h>

int main() {

    int arr1[3] = {1, 2, 3};
    double arr2[3] = {1.1, 2.2, 3.3};

    printf("%3d %8g\n", *(arr1 + 0), *(arr2 + 0));
    printf("%3d %8g\n", *(arr1 + 1), *(arr2 + 1));
    printf("%3d %8g\n", *(arr1 + 2), *(arr2 + 2));

    *arr1 += 100;
    *arr2 += 120.5;

    printf("%3d %8g\n", arr1[0], arr2[0]);
    printf("%3d %8g\n", arr1[1], arr2[1]);
    printf("%3d %8g\n", arr1[2], arr2[2]);

    return 0;
}
