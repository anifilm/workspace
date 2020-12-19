/*
Q2
날짜를 다루는 Date 클래스를 작성하고자 한다. Date를 이용하는 main()과 실행 결과는
다음과 같다. 클래스 Date를 작성하여 아래 프로그램에 추가하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Date {
private:
    int year;
    int month;
    int day;
public:
    Date(int y, int m, int d);
    Date(string date);

    int getYear();
    int getMonth();
    int getDay();
    void show();
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

Date::Date(string date) {
    // string 타입을 c 스타일 문자열로 변환
    char s_date[12];
    strcpy(s_date, date.c_str());
    // 문자열 자르기
    char* ptr = strtok(s_date, "/");
    year = atoi(ptr);
    ptr = strtok(NULL, "/");
    month = atoi(ptr);
    ptr = strtok(NULL, "/");
    day = atoi(ptr);
}

int Date::getYear() { return year; }
int Date::getMonth() { return month; }
int Date::getDay() { return day; }

void Date::show() {
    cout << year << "년 " << month << "월 " << day << "일" << endl;
}

int main() {

    Date birth(2014, 3, 20);    // 2014년 3월 20일
    Date independenceDay("1945/8/15");  // 1945년 8월 15일
    independenceDay.show();
    cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;

    return 0;
}
