// 사칙 연산 함수 만들기
#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("0으로 나눌 수 없습니다.\n");
        return -1;
    }
}

int main() {

    int first, second;

    printf("정수값 입력: ");
    scanf("%d %d", &first, &second);

    printf("덧셈: %d + %d = %d\n", first, second, Add(first, second));
    printf("뺄셈: %d - %d = %d\n", first, second, Sub(first, second));
    printf("곱셈: %d * %d = %d\n", first, second, Mul(first, second));
    printf("나눗셈: %d / %d = %d\n", first, second, Div(first, second));

    return 0;
}
