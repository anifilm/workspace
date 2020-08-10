#include <stdio.h>

int main() {

    int num1 = 10;

    int *numPtr1;       // 단일 포인터 선언
    int **numPtr2;      // 이중 포인터 선언

    numPtr1 = &num1;        // num1의 메모리 주소 할당
    numPtr2 = &numPtr1;     // numPtr1의 메모리 주소 할당

    printf("numPtr2 -> numPtr1 -> num1: %d\n", **numPtr2);  // 포인터를 두번 역참조하여 num1의 메모리 주소에 접근

    return 0;
}
