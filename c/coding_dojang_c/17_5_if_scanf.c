#include <stdio.h>

int main() {

    int num;

    printf("정수를 입력하세요 (10 또는 20): ");
    scanf("%d", &num);              // 입력받은 값을 변수에 대입

    if (num == 10) {                // num이 10이면
        printf("10 입니다.\n");      // "10입니다."를 출력
    }

    if (num == 20) {                // num이 20이면
        printf("20 입니다.\n");      // "20입니다."를 출력
    }

    return 0;
}
