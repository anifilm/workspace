// 매크로 함수 5 (##의 사용)
#include <stdio.h>
#define AddName(x, y) x##y

int main() {

    int AddName(a, b);      // int ab;로 치환된다.
    ab = 3;
    printf("%d\n", ab);

    return 0;
}
