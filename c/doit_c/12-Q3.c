// Q3 data 배열의 각 요소에 저장된 값 중에서 가장 큰 값을 찾는 코드를 작성해 보세요.
#include <stdio.h>

int main() {

    char data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int i;
    int max = data[0];

    for (i = 0; i < 9; i++) {
        if (max < data[i]) max = data[i];
    }

    printf("max = %d\n", max);

	return 0;
}
