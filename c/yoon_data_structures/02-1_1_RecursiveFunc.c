// 재귀 함수의 기본적인 이해
#include <stdio.h>

void Recursive(int num) {
    if (num <= 0)  // 재귀의 탈출 조건
        return;    // 재귀의 탈출
    printf("Recursive call! %d\n", num);
    Recursive(num - 1);
}

int main() {

    Recursive(3);

    return 0;
}
