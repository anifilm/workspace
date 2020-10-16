// 100번 주사위 굴려서 통계 내기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_COUNT 100

int main() {

    int i, side[6] = {0};

    srand(time(NULL));

    /*
    for (i = 0; i < MAX_COUNT; i++) {
        switch (1 + rand() % 6) {
            case 1:
                side[0] += 1;
                break;
            case 2:
                side[1] += 1;
                break;
            case 3:
                side[2] += 1;
                break;
            case 4:
                side[3] += 1;
                break;
            case 5:
                side[4] += 1;
                break;
            case 6:
                side[5] += 1;
                break;
        }
    }
    */

    for (i = 0; i < MAX_COUNT; i++) {
        side[rand() % 6]++;
    }

    printf("주사위를 %d번 굴려서 나온 결과입니다.\n", MAX_COUNT);
    for (i = 0; i < 6; i++)
        printf("%d번: %d\n", i + 1, side[i]);

    return 0;
}
