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

int main() {

    int year;

    while (1) {
        printf("Enter year: ");
        scanf("%d", &year);
        if (year <= 0)
            break;
        printf("Days up to last year is %d\n", to_last_year(year));
    }

    return 0;
}
