#include <stdio.h>

int main() {

    int num1;

    scanf("%d", &num1); // 값을 입력받음

    switch (num1) {     // num의 값에 따라 분기
    case 1: {           // case에서 변수를 선언하려면 중괄호로 묶어줌
        int num2 = num1;
        printf("num2: %d입니다.\n", num2);
        break;
        }
    case 2:
        printf("num1: 2입니다.\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}
