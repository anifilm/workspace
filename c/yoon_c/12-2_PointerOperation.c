// 포인터가 가리키는 메모리를 참조하는 * 연산자
#include <stdio.h>

int main() {

    int num1 = 100, num2 = 100;
    int* ptr;

    ptr = &num1;    // 포인터 pnum이 num1을 가리킴
    *ptr += 30;     // num1 += 30과 동일

    ptr = &num2;    // 포인터 pnum이 num2를 가리킴
    *ptr -= 30;     // num2 -= 30과 동일

    printf("num1: %d, num2: %d\n", num1, num2);

    return 0;
}
