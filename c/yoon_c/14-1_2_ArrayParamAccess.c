// 배열을 함수의 인자로 전달하는 방식
#include <stdio.h>

void ShowArayElem(int* param, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", param[i]);
    printf("\n");
}

void AddArayElem(int* param, int len, int add) {
    int i;
    for (i = 0; i < len; i++)
        param[i] += add;
}

int main() {

    int arr[3] = {1, 2, 3};
    int arr_len = sizeof(arr) / sizeof(int);

    AddArayElem(arr, arr_len, 1);
    ShowArayElem(arr, arr_len);

    AddArayElem(arr, arr_len, 2);
    ShowArayElem(arr, arr_len);

    AddArayElem(arr, arr_len, 3);
    ShowArayElem(arr, arr_len);

    return 0;
}

/*

다음 두 함수에는 int형 배열의 주소 값을 인자로 전달받을 수 있도록
int형 포인터 변수가 선언되어 있다.

void ShowArayElem(int* param, int len);
void AddArayElem(int* param, int len, int add);

그런데 이를 대신하여 다음과 같이 선언하는 것도 가능하다.

void ShowArayElem(int param[], int len);
void AddArayElem(int param[], int len, int add);

즉 int param[]과 int* param은 완전히 동일한 선언이다.
하지만 이 둘이 같은 선언으로 간주되는 경우는 매개변수의 선언으로 제한된다.

*/
