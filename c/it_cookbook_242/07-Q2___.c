// 02 본문에서 언급한 달력 프로그램을 마저 완성하라. 단, print the calendar 부분을 담당하는 별도의
// 함수를 만들되 그 함수만 따로 떼어 테스트하는 프로그램을 작성해야 한다. 이후 모든 함수를 모아서
// 전체적인 프로그램을 완성한다.
#include <stdio.h>
#define true 1
#define false 0

int leap_year(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
        return true;
    else
        return false;
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

int main() {

    int year, month;

    while (1) {
        printf("Enter year and month: ");
        scanf("%d %d", &year, &month);
        if (year <= 0)
            break;
        printf("Days up to last month is %d\n", to_last_month(year, month));
    }

    return 0;
}
