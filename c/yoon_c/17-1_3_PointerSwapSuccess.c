// 포인터 변수 대상의 Call-by-reference
#include <stdio.h>

void SwapIntPtr(int** dp1, int** dp2) {
    int* temp = *dp1;   // int* temp = ptr1; (ptr1 -> num1 address)와 같은 의미
    *dp1 = *dp2;        // ptr1 = ptr2;
    *dp2 = temp;        // ptr2 = temp;
}

int main() {

    int num1 = 10, num2 = 20;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("(before swap) *ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

    SwapIntPtr(&ptr1, &ptr2);
    printf("\n( after swap) *ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

    return 0;
}

/*

2차원 포인터를 통한 함수호출 매개변수 사용시 (주소 값을 참조로 인자를 전달하게 된다)

int** dp1 = &ptr1;  (*dp1 -> ptr1 = &num1)
int** dp2 = &ptr2;  (*dp2 -> ptr2 = &num2)


아래와 같이 2차원 포인터의 선언내용과 같다.

double num = 3.14;
double* ptr = &num;
double** dptr = &ptr;

double **dptr -> &ptr
         dptr -> ptr address
        *dptr -> ptr -> num address
       **dptr -> ptr -> num value 3.14

*/
