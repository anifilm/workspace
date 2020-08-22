// Q1 사용자에 세 개의 정수 값을 입력 받아서 평균 값을 출력하는 프로그램을 작성하세요.
// 입력은 scanf 함수를 사용하고 입력 실수에 대한 예외 처리는 안 해도 됩니다.
#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("평균 값: %d\n", (num1 + num2 + num3) / 3);

    return 0;
}