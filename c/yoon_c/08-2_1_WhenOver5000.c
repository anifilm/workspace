// break! 이제 그만 빠져나가자!
#include <stdio.h>

int main() {

    int sum = 0, num = 0;

    while (1) {
        sum += num;
        if (sum > 5000)
            break;  // break문 실행! 따라서 반복문 탈출
        num++;
    }

    printf("sum: %d\n", sum);
    printf("num: %d\n", num);

    return 0;
}
