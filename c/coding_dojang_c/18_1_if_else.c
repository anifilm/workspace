#include <stdio.h>

int main() {

    int num = 5;

    if (num == 10) {
        printf("10입니다.\n");
    } else {                        // if의 조건식이 만족하지 않을 때 코드를 실행
        printf("10이 아닙니다.\n"); // num은 10이 아니므로 "10이 아닙니다."가 출력됨
    }

    return 0;
}
