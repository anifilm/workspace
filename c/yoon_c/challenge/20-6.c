/* 도전! 프로그래밍 3
도전 6
친구와 둘이서 숫자 맞추기 게임을 해 본적이 있을 것이다. (보통은 야구 게임이라고 불린다.)
이것을 컴퓨터와 할 수 있도록 프로그램을 작성해 보자. 게임 방식은 다음과 같다.
컴퓨터는 0에서 9사이의 숫자 중에서 서로 다른 세 개의 숫자를 고르고, 사용자는 이것을
맞춰야 한다. 중요한 것은 숫자의 순서까지 정확히 맞춰야 한다는 것이다. 단 사용자가
예상한 숫자를 입력할 때마다 컴퓨터는 입력된 숫자와 컴퓨터 자신이 생각한 숫자가 얼마나
비슷한지를 알려줘야 한다.
예를 들어 컴퓨터가 고른 숫자가 1 4 9 이고, 사용자가 입력한 숫자가 4 0 9이면, 두 개의
숫자 4와 9가 일치한다. 9는 숫자와 위치까지 일치하지만 (1 strike), 4는 숫자만 일치한다.
(1 ball) 이런 경우 컴퓨터는 다음과 같은 메시지를 출력해 준다.
  1 strike, 1 ball

만약에 사용자가 1 4 9 를 입력하였다면, "3 strike, 0 ball"이 되어서 프로그램은 종료가
된다. 이때 몇 번 만에 3 strike를 얻어냈는지에 대해서도 출력해 주기로 하자. (진행하면서
"몇 번째 도전 입니다."라는 메시지를 출력해 줘도 좋다.)

[실행의 예]
Start Game!
3개의 숫자 선택: 1 2 8
1번째 도전 결과: 1 strike, 1 ball
3개의 숫자 선택: 3 0 8
2번째 도전 결과: 2 strike, 0 ball
3개의 숫자 선택: 2 0 8
3번째 도전 결과: 3 strike, 0 ball

Game Over!
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 10

int main() {

    srand(time(NULL));
    int i, check, count = 1, strike = 0, ball = 0;
    int r_num[3], u_num[3];

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
    printf("Game Start!\n");
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
        printf("도전 결과: %d strike, %d ball\n\n", strike, ball);
        // 종료 조건 판단
        if (strike == 3) {
            printf("You Win!!!\n");
            break;
        } else if (count == LIMIT) {
            printf("Game Over!\n");
            break;
        }
        count++;
        strike = ball = 0;
    }

    return 0;
}
