#include <stdio.h>

int main() {

    long long *numPtr1;     // long long형 포인터 선언
    float *numPtr2;         // float형 포인터 선언
    char *cPtr1;            // char형 포인터 선언

    long long num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';

    numPtr1 = &num1;        // num1의 메모리 주소 할당
    numPtr2 = &num2;        // num2의 메모리 주소 할당
    cPtr1 = &c1;            // c1의 메모리 주소 할당

    printf("numPtr1 (%p) -> num1: %lld\n", numPtr1, *numPtr1);    // 10
    printf("numPtr2 (%p) -> num2: %f\n", numPtr2, *numPtr2);      // 3.500000
    printf("  cPtr1 (%p) ->   c1: %c\n", cPtr1, *cPtr1);          // a
    printf("\n");

    printf("*numPtr1 sizeof: %lu byte\n", sizeof(*numPtr1));
    printf("*numPtr2 sizeof: %lu byte\n", sizeof(*numPtr2));
    printf("  *cPtr1 sizeof: %lu byte\n", sizeof(*cPtr1));

    return 0;
}
