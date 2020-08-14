#include <stdio.h>

int main() {

    char data[5] = {1, 2, 3, 4, 5};

    int result = 0, i;

    for (i = 0; i < 5; i++) {
        result = result + data[i];
    }

    printf("data 배열의 각 요소의 합은 %d 입니다.\n", result);

	return 0;
}
