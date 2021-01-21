/* 08
배열을 처리하는 범용 함수 중에는 배열 요소 하나하나를 처리하는 것도 있지만 일련의 배열 요소를 처리하는 것도 있다.
아래 프로그램을 완성하고 실행해 보라.
*/
#include <stdio.h>

static int add(int a, int b) {
    return a + b;
}

static int mult(int a, int b) {
    return a * b;
}

int traverse(int (*fp)(int, int), int size, int *elms) {
    int i, val = *elms;             // 이 함수는 단순히 배열 각 요소를 관통하면서
    for (i = 1; i < size; i++)      // 전달된 함수를 가하는 역할을 수행
        val = fp(val, elms[i]);     // 전달된 어떤 함수라도 실행하기 때문에 범용
    return val;
}

int main() {

    int vector[] = {1, 2, 3, 4, 5};
    printf("%d\n", traverse(add, 5, vector));       // 15를 출력
    printf("%d\n", traverse(mult, 5, vector));      // 120을 출력

    return 0;
}
