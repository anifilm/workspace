#include <stdio.h>

int main() {

    int num = 5;

    // 함수 안에서 삼항 연산자 사용
    // num은 5이므로 "10이 아닙니다." 를 출력
    printf("num: %s\n", (num == 10) ? "10 입니다." : "10 이 아닙니다.");

    return 0;
}
