// for문 기반의 다양한 예제
#include <stdio.h>

int main() {

    int i, num;
    int total = 0;

    printf("0부터 num까지의 덧셈, num은? ");
    scanf("%d", &num);

    for (i = 0; i < num + 1; i++)
        total += i;

    printf("\n0부터 %d까지 덧셈결과: %d \n", num, total);

    return 0;
}
