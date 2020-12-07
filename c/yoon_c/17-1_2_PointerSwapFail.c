// 포인터 변수 대상의 Call-by-reference
#include <stdio.h>

void SwapIntPtr(int* p1, int* p2) {
    printf("\n(called func before swap) *p1, *p2: %d %d\n", *p1, *p2);
    int* temp = p1;
    p1 = p2;
    p2 = temp;
    printf("(called func  after swap) *p1, *p2: %d %d\n", *p1, *p2);
}

int main() {

    int num1 = 10, num2 = 20;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("(before swap) *ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

    SwapIntPtr(ptr1, ptr2);
    printf("\n( after swap) *ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

    return 0;
}

/*

포인터 변수의 함수호출 매개변수 사용시 (주소 값을 복사하여 인자를 전달하게 된다)

int* p1 = ptr1;  (ptr1 = &num1)
int* p2 = ptr2;  (ptr2 = &num2)

*/
