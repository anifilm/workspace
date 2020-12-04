// 조건 연산자: 피 연산자가 세 개인 '삼항 연산자'
#include <stdio.h>

int main() {

    int num, abs;

    printf("정수 입력: ");
    scanf("%d", &num);

    abs = num > 0 ? num : num * (-1);

    printf("절대값: %d\n", abs);

    return 0;
}
