// 369에 '짝'이라고 출력하기
#include <stdio.h>

int main() {

    int i, num, check;

    for (i = 1; i <= 100; i++) {
        num = i;

        do {
            check = num % 10;
            if (check && (check % 3) == 0) break;
            num = num / 10;
        } while (num > 0);

        if (num)
            printf(" (짝) ");
        else
            printf("  %3d ", i);

        if ((i % 10) == 0)
            printf("\n");
    }

    return 0;
}
