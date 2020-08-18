#include <stdio.h>

int main() {

    int m, n;
    for (m = 5; m < 7; m++) {
        for (n = 0; n < 3; n++) {
            // m 값이 5이고 n 값이 1일 때 goto문을 수행
            if (m == 5 && n == 1) goto exit_pos;
            printf("m(%d) - n(%d)\n", m, n);
        }
    }

    exit_pos :
    printf("< end >\n");

	return 0;
}
