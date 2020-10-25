// xⁿ을 계산하는 재귀 함수
#include <stdio.h>

int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (x == 1)
        return x;
    else
        return x * power(x, n - 1);
}

int main() {

    int x, n;

    printf("두개의 숫자를 입력하세요: ");
    scanf("%d %d", &x, &n);

    printf("%d ^ %d = %d\n", x, n, power(x, n));

    return 0;
}

/*

NOTE_ 같은 문제를 비슷한 노력으로 해결할 수 있다면 재귀 호출을 사용하지 않는 쪽으로
구현하는 것이 바람직합니다. 만들어진 프로그램을 실행해보면 재귀 호출을 사용하지 않는
경우가 실행도 빠르고 필요한 메모리 양도 작습니다.

특히 인터프리터 언어인 파이썬은 사용할 수 있는 재귀 호출의 중첩 횟수 제한이 엄격합니다.
일정 규모 이상의 재귀 호출이 필요한 문제를 파이썬으로 풀어야 한다면 재귀 호출을 사용하지
않는 방법을 처음부터 고민해야 할 수도 있습니다.

*/
