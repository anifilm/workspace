// 다양한 종류의 함수 정의하기
#include <stdio.h>

int AbsCompare(int num1, int num2);    // 절대값이 큰 정수 반환
int GetAbsValue(int num);              // 전달인자의 절대값을 반환

int main() {

    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("%d와 %d중 절대값이 큰 정수: %d\n", num1, num2, AbsCompare(num1, num2));

    return 0;
}

int AbsCompare(int num1, int num2) {
    if (GetAbsValue(num1) > GetAbsValue(num2))
        return num1;
    else
        return num2;
}

int GetAbsValue(int num) {
    if (num < 0)
        return num * (-1);
    else
        return num;
}
