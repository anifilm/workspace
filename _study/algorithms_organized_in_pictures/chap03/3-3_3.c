// 1 - 2 + 3 - 4 + 5 - 5 + ... - 100의 합을 구하는 알고리즘
#include <stdio.h>

int main() {

    int i, sum = 0, flag = 0;

    for (i = 1; i <= 100; i++) {
        if (flag == 1) {
            sum = sum - i;
            flag = 0;
        } else {
            sum = sum + i;
            flag = 1;
        }
    }
    printf("%d\n", sum);

    return 0;
}
