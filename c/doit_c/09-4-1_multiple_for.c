// for 반복문을 사용한 중첩 반복문 예제
#include <stdio.h>

int main() {

    int m, n;

    for (m = 5; m < 7; m++) {
        for (n = 0; n < 3; n++) {
            printf("m(%d) = n(%d)\n", m, n);
        }
    }

	return 0;
}
