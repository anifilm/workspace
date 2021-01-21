/* 02
본문에서 언급한 달력 프로그램을 마저 완성하라. 단, print the calendar 부분을 담당하는 별도의 함수를
만들되 그 함수만 따로 떼어 테스트하는 프로그램을 작성해야 한다. 이후 모든 함수를 모아서 전체적인
프로그램을 완성한다.
*/
#include <stdio.h>
#define TRUE   1
#define FALSE  0

int leap_year(int y) {
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        return TRUE;
    else
        return FALSE;
}

// 서기 1년 1월 1일 부터 작년 말까지의 날짜 수를 돌려주는 함수
int to_last_year(int year) {
    int i, total = 0;
    for (i = 1; i <= (year - 1); i++) {
        if (leap_year(i))
            total += 366;
        else
            total += 365;
    }
    return total;
}

// 금월 1년 1월 1일 부터 전달 말까지의 날짜 수
int to_last_month(int year, int month) {
    int i, total = 0;
    for (i = 1; i <= (month - 1); i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
            total += 31;    // 큰 달이면 31일
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            total += 30;    // 작은 달이면 30일
        else {              // 2월은 평년, 윤년을 반영
            if (leap_year(year))
                total += 29;
            else
                total += 28;
        }
    }
    return total;
}

void print_the_calendar(int year, int month) {
    int i, d, m;
    d = (to_last_year(year) + to_last_month(year, month)) % 7;
    m = to_last_month(year, month + 1) - to_last_month(year, month);
    printf("\n 일\t 월\t 화\t 수\t 목\t 금\t 토\n\n");
    if (d != 6)
        for (i = 0; i <= d; i++)
            printf(" \t");
    for (i = 1; i <= m; i++) {
        printf(" %02d\t", i);
        if ((i + d + 1) % 7 == 0)
            printf("\n\n");
    }
    printf("\n\n");
}

int main() {

    int year, month;

    while (1) {
        printf("Enter year and month: ");
        scanf("%d", &year);
        if (year <= 0)
            break;
        scanf("%d", &month);
        print_the_calendar(year, month);
    }

    return 0;
}
