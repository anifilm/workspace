// Q2 data 배열의 짝수 번째 요소에 저장된 값을 합산하는 코드를 작성해 보세요.
#include <stdio.h>

int main() {

    char data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int i;
    int sum = 0;

    for (i = 0; i < 9; i++) {
        if (i % 2 == 0) {
            printf("%d -> ", i);
            printf("%d\n", data[i]);
            sum += data[i];
        }
    }

    printf("sum = %d\n", sum);

	return 0;
}
