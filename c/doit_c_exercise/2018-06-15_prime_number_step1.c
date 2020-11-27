// 1 ~ 100 사이에 존재하는 소수 출력하기
#include <stdio.h>
#define MAX_NUM 100

int main() {

    int num, i;

    for (num = 2; num <= MAX_NUM; num++) {
        for (i = 2; i < num; i++)
            if (num % i == 0) break;
        if (num == i) printf("%d ", num);
    }
    printf("\n");

    return 0;
}
