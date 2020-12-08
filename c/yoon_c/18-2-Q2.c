/* 문제 18-1 [2차원 배열에 대한 종합점검]
문제 2
아래의 코드를 참조하여 ???를 대신할 수 있는 매개변수 선언을 추가해 보자.

*/
#include <stdio.h>

void SimpleFuncOne(int* p_arr1, int* p_arr2);
void SimpleFuncTwo(int (*p_arr1)[4], int (*p_arr2)[4]);

int main() {

    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    return 0;
}
