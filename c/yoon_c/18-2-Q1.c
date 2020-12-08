/* 문제 18-1 [2차원 배열에 대한 종합점검]
문제 1
아래에서 보이는 main 함수에서 물음표 ???을 대신할 수 있는 포인터 변수를 선언해 보자.

*/
#include <stdio.h>

int main() {

    int* arr1[5];
    int* arr2[3][5];

    int** ptr1 = arr1;
    int* (*ptr2)[5] = arr2;

    printf("%p %p\n", ptr1, arr1);
    printf("%p %p\n", ptr2, arr2);

    return 0;
}
