/* 06
다음 소스코드를 실행해 보고 a의 결과값이 왜 그렇게 되는지 소스코드에 주석을 달아 설명하라.
*/
#include <stdio.h>

int main() {

    int a, b, c, d, e;

    a = b = c = d = e = 1;
    // a = 1, b = 1, c = 1, d = 1, e = 1

    a = a-- - ++b * (c = d = 10) + (e *= 2);
    // a = 1 (연산 이후 0)
    // b = 2
    // c = 10, d = 10
    // e = 2
    // 1 - (2 * 10) + 2
    // 1 - 20 + 2
    // a = -17

    printf("After calaulation, a becomes %d\n", a);

    return 0;
}
