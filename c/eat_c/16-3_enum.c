// 공용체
#include <stdio.h>

union A {
    int i;
    short j;
    char k;
};

int main() {

    union A a;

    a.i = 0x12345678;
    printf("int i  : 0x%x\n", a.i);    // 0x12345678
    printf("short j: 0x%x\n", a.j);    // 0x5678
    printf("char k : 0x%x\n", a.k);    // 0x78

    return 0;
}
