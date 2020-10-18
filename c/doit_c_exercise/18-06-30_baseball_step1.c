// 야구 게임 - 세 개의 정수값 맞추기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 10

int main() {

    int i, check, count = 1, strike = 0, ball = 0;
    int r_num[3], u_num[3];
    srand(time(NULL));

    // 3개의 1부터 9까지의 숫자를 랜덤으로 지장
    r_num[0] = 1 + rand() % 9;
    while (count < 3) {
        r_num[count] = 1 + rand() % 9;
        // 중복 값 체크
        for (check = 0; check < count; check++)
            if (r_num[check] == r_num[count]) break;
        if (check == count) count++;
    }

    count = 1;
    printf("게임 시작!\n");
    while (1) {
        printf("[%d번째 시도] 3개의 숫자를 선택: ", count);
        for (i = 0; i < 3; i++)
            scanf("%d", &u_num[i]);
        /*
        if (r_num[0] == u_num[0]) strike++;
        if (r_num[0] == u_num[1]) ball++;
        if (r_num[0] == u_num[2]) ball++;
        if (r_num[1] == u_num[0]) ball++;
        if (r_num[1] == u_num[1]) strike++;
        if (r_num[1] == u_num[2]) ball++;
        if (r_num[2] == u_num[0]) ball++;
        if (r_num[2] == u_num[1]) ball++;
        if (r_num[2] == u_num[2]) strike++;
        */
        for (i = 0; i < 3; i++) {
            for (check = 0; check < 3; check++) {
                if (r_num[i] == u_num[check]) {
                    if (i == check)
                        strike++;
                    else
                        ball++;
                }
            }
        }
        printf("도전 결과: %d 스트라이크, %d 볼!\n\n", strike, ball);
        // 종료 조건 판단
        if (strike == 3) {
            printf("당신이 이겼습니다!\n");
            break;
        } else if (count == LIMIT) {
            printf("게임에서 졌습니다.\n");
            break;
        }
        count++;
        strike = ball = 0;
    }

    return 0;
}
