#include <iostream>

using namespace std;

class Date {

	int year;
	int month;
	int day;

	public:
		void set_date(int _year, int _month, int _day) {
			year = _year;
			month = _month;
			day = _day;
		}

		void cal_date() {
			if (day > 28 && month == 2) {
				month += 1;
				day -= 28;
			}

			if (month > 12) {
				year += 1;
				month -= 12;
			}
		}

		void add_day(int inc) {
			day += inc;
			cal_date();
		}

		void add_month(int inc) {
			month += inc;
			cal_date();
		}

		void add_year(int inc) {
			year += inc;
			cal_date();
		}

		void get_date() {
			cout << year << "년 " << month << "월 " << day << "일 " << endl;
		}
};

int main() {

	Date data;
	data.set_date(2012, 2, 28);
	data.add_month(11);
	data.add_day(3);

	data.get_date();

	return 0;
}


