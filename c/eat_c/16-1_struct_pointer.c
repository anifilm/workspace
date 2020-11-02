// 구조체 포인터 1
#include <stdio.h>

struct Test {
    int a, b;
};

int main() {

    struct Test st;
    struct Test *ptr;

    ptr = &st;

    (*ptr).a = 1;
    (*ptr).b = 2;

    printf("st의 a 멤버: %d\n", st.a);
    printf("st의 b 멤버: %d\n", st.b);

	return 0;
}

