#include <stdio.h>

enum DayOfWeek {    // 열거형 정의
    Sunday = 0,     // 초기값 할당
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {

    enum DayOfWeek week;    // 열거형 변수 선언

    week = Tuesday;         // 열거형 값 할당

    printf("week: %d\n", week);

    return 0;
}
