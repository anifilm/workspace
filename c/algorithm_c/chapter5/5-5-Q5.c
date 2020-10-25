// Q5 오른쪽의 recur3 함수를 다시 비재귀적으로 구현하세요.
#include <stdio.h>

// 재귀 함수 recur3
void recur3(int n) {
    if (n > 0) {
        recur3(n - 1);
        recur3(n - 2);
        printf("%d ", n);
    }
}

int main() {

    int x;

    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    recur3(x);

    return 0;
}

/*
4일때
1 2 1 3 1 2 4
*/
