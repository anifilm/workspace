/* 문제 07-3 [while문과 do~while문에 익숙해지기]
문제 2
0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반
으로 구현해보자. 참고로 덧셈의 결과는 2550이 되어야 한다.
*/
#include <stdio.h>

int main() {

    int total = 0, num = 0;

    do {
        total += num;
        num += 2;
    } while (num <= 100);

    printf("합계: %d\n", total);

    return 0;
}
