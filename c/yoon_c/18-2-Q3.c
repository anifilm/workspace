/* 문제 18-1 [2차원 배열에 대한 종합점검]
문제 3
이 문제도 위의 문제와 유사하다. 즉, ???를 대신할 수 있는 매개변수 선언을 추가하는 것
이다. 그러나 이번에는 약간의 응용력을 요구한다.

*/
#include <stdio.h>

void ComplexFuncOne(int** p_arr1, int* (*p_arr2)[5]);
void ComplexFuncTwo(int*** p_arr1, int*** (*p_arr2)[5]);

int main() {

    int* arr1[3];
    int* arr2[3][5];
    int** arr3[5];
    int*** arr4[3][5];

    ComplexFuncOne(arr1, arr2);
    ComplexFuncTwo(arr3, arr4);

    return 0;
}
