// 디폴트 생성자 (Default Constructor)
#include <iostream>

class Date {
    int _year;
    int _month;     // 1부터 12까지
    int _day;       // 1부터 31까지

public:
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    // 해당 월의 총 일수를 구한다.
    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();

    // 디폴트 생성자 (Default Constructor)
    Date() {
        _year = 2012;
        _month = 7;
        _day = 12;
    }
};

int Date::GetCurrentMonthTotalDays(int year, int month) {
    static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month != 2) {
        return month_day[month - 1];
    } else if (year % 4 == 0 && year % 100 != 0) {
        return 29;  // 윤년
    } else {
        return 28;
    }
}

void Date::AddDay(int inc) {
    while (true) {
        // 현재 달의 총 일수
        int current_month_total_days = GetCurrentMonthTotalDays(_year, _month);

        // 같은 달 안에 들어온다면
        if (_day + inc <= current_month_total_days) {
            _day += inc;
            return;     // while에서 빠져나간다 (주의!)
        } else {
            // 다음달로 넘어간다.
            inc -= (current_month_total_days - _day + 1);
            _day = 1;
            AddMonth(1);
        }
    }
}

void Date::AddMonth(int inc) {
    AddYear((inc + _month - 1) / 12);
    _month = _month + inc % 12;
    _month = (_month == 12 ? 12 : _month % 12);
}

void Date::AddYear(int inc) { _year += inc; }

void Date::ShowDate() {
    std::cout << "오늘은 " << _year << "년 " << _month << "월 "
              << _day << "일 입니다." << std::endl;
}

int main() {

    Date day = Date();      // 디폴트 생성자로 초기화
    Date day2;              // 디폴트 생성자로 초기화

    day.ShowDate();
    day2.ShowDate();

    return 0;
}
