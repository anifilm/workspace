// 구조체 포인터 1 (포인터 갖고 놀기)
#include <stdio.h>

struct Test {
    int c;
};

int main() {

    struct Test st;
    struct Test* ptr = &st;

    // ptr이 가리키는 구조체 변수의 c 멤버의 값을 0으로 한다.
    (*ptr).c = 0;

    printf("st.c: %d\n", st.c);

    // ptr이 가리키는 구조체 변수의 c 멤버의 값을 1로 한다.
    ptr->c = 1;

    printf("st.c: %d\n", st.c);

    return 0;
}
