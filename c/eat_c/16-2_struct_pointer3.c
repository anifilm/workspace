// 구조체 포인터 3 (구조체 포인터 연습)
#include <stdio.h>

void add_one(int* a);

struct Test {
    int c;
};

int main() {

    struct Test st;
    struct Test* ptr = &st;

    // ptr이 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다.
    ptr->c = 0;

    // add_one 함수의 인자에 st 구조체 변수의 멤버 c의 주소값을 전달
    add_one(&st.c);
    printf("st.c: %d \n", st.c);

    // add_one 함수의 인자에 ptr이 가리키는 구조체 변수의 멤버 c의 주소값을 전달
    add_one(&ptr->c);
    printf("st.c: %d \n", st.c);

    return 0;
}

void add_one(int* a) {
    *a += 1;
}
