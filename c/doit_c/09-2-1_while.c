// while 반복문을 사용하여 1부터 5까지 더하기
#include <stdio.h>

int main() {

    int sum = 0;
    int num = 1;

    while (num <= 5) {
        printf("num(%d) + sum(%d) = ", num, sum);
        sum = sum + num;
        printf("%d\n", sum);
        num++;
    }

    printf("\nResult: num = %d, sum = %d\n", num, sum);

	return 0;
}
