#include <stdio.h>

int main() {

    short **pp, data = 3;
    long long my_ptr = (long long)&data;
    pp = (short **)&my_ptr;

    printf("data의 주소값: %p, 저장된 값: %d\n", &data, data);

    printf("\n일반 변수 my_ptr에 저장된 주소값: %p \n가리키는 대상(->&data)의 값: 사용불가\n", my_ptr);
    printf("일반 변수 my_ptr의 주소값: %p\n", &my_ptr);

    printf("\n2차원 포인터 pp에 저장된 주소값: %p \n가리키는 대상(->&my_ptr->&data)의 값: %d\n", pp, **pp);
    printf("2차원 포인터 pp의 주소값: %p\n", &pp);

    return 0;
}
