// 연습문제 1-1
// 계승(factorial) 함수는 모든 음이 아닌 정수에 대해 다음과 같이 재귀 방식으로
// 정의할 수 있습니다.
// fact(n) = n * fact(n - 1), if n > 1
//         = 1, if n = 1
// int n을 인수로 받아 n의 계승을 반환하는 함수를 재귀를 사용하는 방식과 사용하지
// 않는 방식 두 가지로 작성해봅시다.
#include <stdio.h>

// 재귀호출로 factorial을 구하는 함수
int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

// 재귀를 사용하지 않고 factorial을 구하는 함수
int fact2(int n) {
    int i, result;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main() {

    int x;

    printf("숫자를 하나 입력하세요: ");
    scanf("%d", &x);

    printf("%d!의 값: %d (재귀사용)\n", x, fact(x));
    printf("%d!의 값: %d (재귀없이)\n", x, fact2(x));

    return 0;
}
