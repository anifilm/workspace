// 복잡한 선언은 typedef 문법으로 코드를 단순화시켜 사용하세요!
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

    typedef int (*OP_TYPE)(int, int);   // OP_TYPE 라는 새로운 자료형을 정의
    OP_TYPE p[4] = {&Sum, &Sub, &Mul, &Div};
    char op_table[4] = {'+', '-', '*', '/'};

    int i;
    // Sum, Sub, Mul, Dib 순으로 호출함
    for (i = 0; i < 4; i++)
        printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));

    return 0;
}
