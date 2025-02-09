// 중첩된 if 조건문을 사용해 날짜, 월, 년도 증가 시키기
#include <stdio.h>

int main() {

    int year = 2019, month = 12, day = 31;
    day++;

    if (day > 31) {
        month++;
        day = 1;

        if (month > 12) {
            year++;
            month = 1;
        }
    }
    printf("Date: %d년 %d월 %d일\n", year, month, day);

    return 0;
}
