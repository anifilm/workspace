// 1 ~ 100 사이에 존재하는 소수 출력하기
#include <stdio.h>
#define MAX_NUM 100

int IsPrime(int a_num) {
    int i;
    for (i = 2; i < a_num; i++)
        if (a_num % i == 0) return 0;
    return 1;
}

int main() {

    int num;

    for (num = 2; num <= MAX_NUM; num++) {
        if (IsPrime(num) == 1) printf("%d ", num);
    }
    printf("\n");

    return 0;
}
