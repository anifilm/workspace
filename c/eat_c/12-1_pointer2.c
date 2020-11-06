// 포인터의 시작
#include <stdio.h>

int main() {

    int a;
    int* p;

    p = &a;		// 포인터 p에 a의 메모리 주소값을 대입

    printf("int 변수 a가 저장된 주소: %p\n", &a);		// &a 메모리의 주소값을 보여준다
    printf("포인터 p에 들어 있는 값: %p\n", p);

    return 0;
}
