/* 도전! 프로그래밍 1
도전 6
프로그램 사용자로부터 초(second)를 입력받은 후에, 이를 [시, 분, 초]의 형태로 출력하는
프로그램을 작성해 보자.

[실행의 예]
초(second) 입력: 3615
[hour: 1, min: 0, sec: 15]
*/
#include <stdio.h>

void SecondToHMS(int sec) {
    int hour, min;

    hour = sec / 360;
    sec = sec % 360;
    min = sec / 60;
    sec = sec % 60;

    printf("hour: %d, min %d, sec: %d\n", hour, min, sec);
}

int main() {

    int second;

    printf("초(second) 입력: ");
    scanf("%d", &second);

    SecondToHMS(second);

    return 0;
}
