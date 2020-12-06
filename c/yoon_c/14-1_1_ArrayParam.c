// 배열을 함수의 인자로 전달하는 방식
#include <stdio.h>

void ShowArayElem(int* param, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", param[i]);
    printf("\n");
}

int main() {

    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};

    ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
    ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

    return 0;
}

/*

함수의 매개변수에 인자를 전달하는 것은 일반 변수 또는 포인터 변수 선언과 같다.

int* param = arr1;  int len = sizeof(arr1) / sizeof(int);
int* param = arr2;  int len = sizeof(arr2) / sizeof(int);

*/
