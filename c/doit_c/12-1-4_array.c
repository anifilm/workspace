#include <stdio.h>

void main() {

    short student[20] = {0,};   // 모든 요소를 0으로 초기화

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);
}
