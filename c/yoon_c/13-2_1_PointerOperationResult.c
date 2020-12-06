// 포인터를 대상으로 하는 증가 및 감소 연산
#include <stdio.h>

int main() {

    int* ptr1 = 0;
    double* ptr2 = 0;

    printf("%p %p\n", ptr1, ptr2);
    printf("%p %p %p\n", ptr1 + 1, ptr1 + 2, ptr1 + 3);  // 각각 4바이트씩 증가
    printf("%p %p %p\n", ptr2 + 1, ptr2 + 2, ptr2 + 3);  // 각각 8바이트씩 증가
    printf("\n");

    printf("%p %p\n", ptr1, ptr2);
    ptr1++; // 4바이트 증가
    ptr2++; // 8바이트 증가
    printf("%p %p\n", ptr1, ptr2);

    return 0;
}

/*

포인터를 대상으로 하는 증가연산의 결과는 다음과 같다.

 - int형 포인터를 대상으로 n 증가          n x sizeof(int)의 크기만큼 증가
 - double형 포인터를 대상으로 n 증가       n x sizeof(double)의 크기만큼 증가

*/
