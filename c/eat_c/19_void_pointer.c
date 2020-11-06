// void 형을 가리키는 포인터
#include <stdio.h>

int main() {

    void* a;
    double b = 123.4;

    a = &b;
    printf("%lf\n", *(double*)a);

    return 0;
}
