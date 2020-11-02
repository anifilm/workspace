// 구조체 포인터 2 (헷갈림 주의)
#include <stdio.h>

struct Test {
    int c;
    int *pointer;
};

int main() {

    struct Test st;
    int i = 0;

    // t의 멤버 pointer는 i를 가리키게 된다.
    st.pointer = &i;

    // t의 멤버 pointer가 가리키는 변수 (&i)의 값을 3으로 만든다.
    *st.pointer = 3;

    printf("i: %d\n", i);

    struct Test *ptr = &st;
    *ptr->pointer = 4;

    printf("i: %d\n", i);

    return 0;
}

/*

-> 가 * 보다 우선순위가 높으므로 먼저 해석하게 된다.
*(ptr->pointer) = 4; 와 같음

즉, ptr이 가리키는 구조체 변수의 pointer 멤버가 가리키는 변수 (&i)의 값을
4로 바꾼다.

*/
