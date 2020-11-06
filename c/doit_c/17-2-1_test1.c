#include <stdio.h>

int main() {

    short data = 3;
    short* p = &data;
    short** pp = &p;

    printf("data의 주소값: %p, 저장된 값: %d\n", &data, data);

    printf("\n포인터 p에 저장된 주소값: %p \n가리키는 대상(->&data)의 값: %d\n", p, *p);
    printf("포인터 p의 주소값: %p\n", &p);

    printf("\n2차원 포인터 pp에 저장된 주소값: %p \n가리키는 대상(->&my_ptr->&data)의 값: %d\n", pp, **pp);
    printf("2차원 포인터 pp의 주소값: %p\n", &pp);

    return 0;
}
