#include <stdio.h>

int main() {

    int num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';

    void *ptr;

    ptr = &num1;
    printf("%d\n", *(int *)ptr);      // void 포인터를 int 포인터로 변환한 뒤 역참조

    ptr = &num2;
    printf("%f\n", *(float *)ptr);    // void 포인터를 float 포인터로 변환한 뒤 역참조

    ptr = &c1;
    printf("%c\n", *(char *)ptr);     // void 포인터를 int 포인터로 변환한 뒤 역참조


    return 0;
}
