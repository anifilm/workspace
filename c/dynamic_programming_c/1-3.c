// [1-2]를 짧게 고쳐 쓴 코드
#include <stdio.h>

int sum(int n) {
    /*
    // 첫 번째 종료 조건
    if (n <= 0)
        return 0;
    // 두 번째 종료 조건
    if (n == 1)
        return 1;
    return n + sum(n - 1);
    */
    return (n <= 0) ? 0 : ((n == 1)) ? 1 : (n + sum(n - 1));
}

int main() {

    int x;

    printf("숫자를 하나 입력하세요: ");
    scanf("%d", &x);

    printf("1에서 %d까지의 합: %d\n", x, sum(x));

    return 0;
}

/*

쉬운 코드와 복잡한 코드 중에 선택해야 한다면, 성능이나 메모리 이점이 있지 않은 한
쉬운 코드가 좋습니다.

NOTE_ 종료 조건을 누락하면 안 됩니다. 종료 조건을 누락하면 재귀 호출이 무한히
반복 될 수 있습니다.

*/
