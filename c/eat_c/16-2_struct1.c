// 구조체의 대입 1 (구조체 복사)
#include <stdio.h>

struct Test {
    int i;
    char c;
};

int main() {
    struct Test st1, st2;

    st2.i = 1;
    st2.c = 'c';

    st1 = st2;      // 구조체 복사
    printf("st1.i: %d\n", st2.i);
    printf("st1.c: %c\n", st2.c);

    return 0;
}
