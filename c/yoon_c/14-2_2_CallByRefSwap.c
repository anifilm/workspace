// 주소 값을 전달하는 형태의 함수호출: Call-by-reference
#include <stdio.h>

void Swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    int num1 = 10;
    int num2 = 20;

    printf("num1 num2: %d %d\n", num1, num2);

    Swap(&num1, &num2);     // num1과 num2에 저장된 값이 서로 바꾸는 것이 가능
    printf("num1 num2: %d %d\n", num1, num2);

    return 0;
}

/*

함수의 매개변수에 참조로 인자를 전달하는 것 역시 포인터 변수 선언과 같다.

int* ptr1 = &num1;
int* ptr2 = &num2;

*/
