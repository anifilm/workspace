#include <stdio.h>
#include <malloc.h>

int main() {

    short** pp, data = 3;
    pp = (short**)malloc(4);
    *pp = &data;

    printf("data의 주소값: %p, 저장된 값: %d\n", &data, data);

    printf("\n동적할당된 4바이트 메모리에 저장된 주소값: %p\n", *pp);
    printf("동적할당된 4바이트 메모리의 주소값: %p\n", pp);

    printf("\n2차원 포인터 pp에 저장된 주소값: %p \n가리키는 대상(->malloc(4)->&data)의 값: %d\n", pp, **pp);
    printf("2차원 포인터 pp의 주소값: %p\n", &pp);

    free(pp);

    return 0;
}
