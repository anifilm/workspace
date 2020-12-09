/* 도전! 프로그래밍 3
도전 5
가위 바위 보 게임을 만들어 보자. 사용자로부터 가위 바위 보 중에서 하나를 입력 받는다.
그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 한다. 이 둘을
비교해서 승자와 패자를 가려주는 프로그램을 작성해 보자. 단 프로그램의 진행은 사용자가
질 때까지 계속되어야 하고, 마지막에 가서는 게임의 결과 (예: 4승 3무)까지 출력해 주도록
하자.

[실행의 예]
바위는 1, 가위는 2, 보는 3: 2
당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다.

바위는 1, 가위는 2, 보는 3: 1
당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다.

바위는 1, 가위는 2, 보는 3: 3
당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다!

바위는 1, 가위는 2, 보는 3: 3
당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다.

게임의 결과: 1승 2무

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand((int)time(NULL));    // 현재시간을 이용해서 시드 설정

    const char* arr[3] = {"바위", "가위", "보"};
    int select, com_sel;
    int win = 0, draw = 0;

    while (1) {
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &select);

        com_sel = 1 + rand() % 3;

        printf("당신은 %s 선택, ", arr[select - 1]);
        printf("컴퓨터는 %s 선택, ", arr[com_sel - 1]);

        if (select == com_sel) {
            printf("비겼습니다.\n");
            draw += 1;
        } else if (select % 3 == (com_sel + 1) % 3) {
            printf("당신이 이겼습니다!\n");
            win += 1;
        } else {
            printf("당신이 졋습니다.\n");
            break;
        }
        printf("\n");
    }
    printf("\n게임의 결과: %d승, %d무\n", win, draw);

    return 0;
}
