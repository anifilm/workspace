#include <stdio.h>

void test() {
    #define TRUE 1
    typedef int* ptrType;
    int num = 10;
    ptrType p = &num;
    printf("%d\n", *p);
}

int main() {

    // ptrType p;  // 컴파일 오류
    test();
    printf("%d\n", TRUE);

    return 0;
}
