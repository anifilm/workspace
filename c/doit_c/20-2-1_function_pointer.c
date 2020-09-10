// 함수 포인터를 사용하여 비슷한 함수를 반복문으로 호출하기
#include <stdio.h>

int Sum(int a, int b) {     // 덧셈
    return a + b;
}

int Sub(int a, int b) {     // 뺄셈
    return a - b;
}

int Mul(int a, int b) {     // 곱셈
    return a * b;
}

int Div(int a, int b) {     // 나눗셈
    return a / b;
}

int main() {

    int (*p[4])(int, int) = {&Sum, &Sub, &Mul, &Div}, i;
    char op_table[4] = {'+', '-', '*', '/'};

    // Sum, Sub, Mul, Dib 순으로 호출함
    for (i = 0; i < 4; i++)
        printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));

    return 0;
}
