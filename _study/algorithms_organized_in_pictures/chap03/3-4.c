// 알고리즘의 구조화
// 1~100까지의 숫자 중에서 홀수, 짝수 합을 구하여 출력하는 알고리즘
#include <stdio.h>

int odd, even;

void add();
void output();

int main() {

    add();
    output();

    return 0;
}

void add() {
    int i, mod;
    for (i = 1; i <= 100; i++) {
        mod = i % 2;
        if (mod == 0) even += i;
        else odd += i;
    }
}

void output() {
    printf("홀수합: %d, 짝수합: %d\n", odd, even);
}
