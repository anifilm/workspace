// continue! 나머지 생략하고 반복조건 확인하러 가자!
#include <stdio.h>

int main() {

    int num;

    printf("start! ");
    for (num = 0; num < 20; num++) {
        if (num % 2 == 0 || num % 3 == 0)
            continue;
        printf("%d ", num);
    }
    printf("end!\n");

    return 0;
}
