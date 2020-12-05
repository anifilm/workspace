// 다양한 형태의 함수 정의1: 전달인자와 반환 값이 모두 있는 경우
#include <stdio.h>

int Add(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int result;

    result = Add(3, 4);
    printf("덧셈결과1: %d\n", result);

    result = Add(5, 8);
    printf("덧셈결과2: %d\n", result);

    return 0;
}
