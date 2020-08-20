// 1차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기
#include <stdio.h>

int main() {

    char data[12] = {0, 0, 2, 0, 1, 1, 0, 0, 2, 1, 0, 2};
    int i, x, y;

    for (i = 0; i < 12; i++) {
        x = i % 4 + 1;
        y = i / 4 + 1;

        // printf("%d행 %d열에", y, x);
        if (data[i] == 1) printf("○");
        else if (data[i] == 2) printf("●");
        else printf("+");
        if (x == 4) printf("\n");
    }

	return 0;
}
