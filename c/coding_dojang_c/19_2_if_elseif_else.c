#include <stdio.h>

int main() {

    int num = 30;

    if (num == 10)         // num이 10일 때
        printf("10 입니다.\n");
    else if (num == 20)    // num이 20일 때
        printf("20 입니다.\n");
    else                   // 앞의 조건식에 모두 만족하지 않을 때
        printf("10도 20도 아닙니다.\n");

    return 0;
}
