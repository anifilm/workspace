// 하노이의 탑 문제를 해결하는 재귀 함수
#include <stdio.h>

void towerOfHanoi(char s, char d, char e, int n) {
    if (n <= 0)     // 종료 조건
        return;
    towerOfHanoi(s, e, d, n - 1);
    printf("%d번 원반을 %c 기둥에서 %c 기둥으로 옮깁니다.\n", n, s, d);
    towerOfHanoi(e, d, s, n - 1);
}

int main() {

    int n;

    printf("원반의 수를 입력하세요: ");
    scanf("%d", &n);

    towerOfHanoi('S', 'D', 'E', n);

    return 0;
}
