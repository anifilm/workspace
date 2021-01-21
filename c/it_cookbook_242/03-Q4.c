/* 04
초 단위를 입력받아 그것을 시간, 분, 초 단위로 출력하는 프로그램을 작성하라.
  > Enter seconds
  > 25310 ([Enter])
  > It is %d hours, 1 minutes, 50 seconds.
*/
#include <stdio.h>

int main() {

    int sec, hour, min;

    printf("Enter seconds: ");
    scanf("%d", &sec);

    hour = (sec / 60) / 60;
    min = (sec / 60) % 60;
    sec = sec % 60;
    printf("It is %d hours, %d minutes, %d seconds.\n", hour, min, sec);

    return 0;
}
