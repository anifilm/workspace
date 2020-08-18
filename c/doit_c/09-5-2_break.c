// break 문을 사용해서 반복문 모두 빠져나오기
#include <stdio.h>

int main() {

    int m, n;

    for (m =5; m < 7; m++) {
        for (n = 0; n < 3; n++) {
            if (m == 5 && n ==1) break;
            printf("m(%d) = n(%d)\n", m, n);
        }
        if (m == 5 && n == 1) break;
    }

	return 0;
}
