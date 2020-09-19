#include <stdio.h>
#define true 1
#define false 0

// 윤년인지 평년인지 판단하는 함수
int leap_year(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 400 == 0))
        // 4로 나누어 떨어지는 동시에 100으로 나누어 떨어지지 않거나,
        // 4로 나누어 떨어지는 동시에 400으로 나누어 떨어지면 윤년
        return true;
    else
        return false;
}

int main() {

    int year;

    while (1) {
        printf("Enter year: ");
        scanf("%d", &year);
        if (year <= 0)
            break;
        if (leap_year(year))
            printf("It is a leap year.\n");
        else
            printf("It is a NOT leap year.\n");
    }

    return 0;
}
