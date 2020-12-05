// 재귀함수의 기본적인 이해
#include <stdio.h>

void Recursive(int num) {
    if (num <= 0)
        return;
    printf("before Recursive call! %d\n", num);
    Recursive(num - 1);
    printf("after Recursive call! %d\n", num);
}

int main() {

    Recursive(3);

    return 0;
}
