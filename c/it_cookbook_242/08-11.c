#include <stdio.h>

// gcc를 사용할 때는 extern inline을 붙임
// extern inline int add(int a, int b)
inline int add(int a, int b) {  // 인라인 함수로 정의
    return (a + b);
}

int main() {

    int sum, first = 10, second = 20;
    sum = add(first, second);
    printf("Sum is %d\n", sum);

    return 0;
}
