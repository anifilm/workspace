#include <iostream>

class Date {
    int year;
    int month;     // 1부터 12까지
    int day;       // 1부터 31까지

public:
    void SetDate(int _year, int _month, int _day) {
        year = _year;
        month = _month;
        day = _day;
    }
    void AddDay(int inc) {
        // TODO: 윤달 및 각 월의 30 또는 31일 처리 필요
        if (month == 2 && day + inc > 28) {          // 2월 28일 인 경우
            AddMonth(1);
            day += inc - 28;
        } else if (month != 2 && day + inc > 31) {   // 매달의 마지막날인 경우 (2월 제외, 세부구성X)
            AddMonth(1);
            day += inc - 31;
        } else
            day += inc;
    }
    void AddMonth(int inc) {
        if (month + inc > 12) {
            AddYear(1);
            month += inc - 12;
        } else
            month += inc;
    }
    void AddYear(int inc) {
        year += inc;
    }

    void ShowDate() {
        std::cout << year << "년 ";
        std::cout << month << "월 ";
        std::cout << day << "일" << std::endl;
    }
};

int main() {

    Date date;
    date.SetDate(2012, 12, 28);
    date.AddDay(4);

    date.ShowDate();

    return 0;
}
