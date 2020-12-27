/*
Q9
비행기 예약 프로그램을 작성하라. 이 문제는 여러 개의 클래스와 객체들을 다루는 연습을
위한 것이다. 클래스 사이의 상속 관계는 없다. 항공사 이름은 '한성항공'이고, 8개의 좌석
을 가진 3대의 비행기로 서울 부산 간 운항 사업을 한다. 각 비행기는 하루에 한 번만 운항
하며 비행 시간은 07시, 12시, 17시 이다. 비행기 예약 프로그램은 다음의 기능을 가진다.
 - 예약: 비행 시간, 사용자의 이름, 좌석 번호를 입력받아 예약한다.
 - 취소: 비행 시간, 사용자의 이름, 좌석 번호를 입력받고 예약을 취소한다.
 - 예약 보기: 예약된 좌석 상황을 보여준다.
    (실행 결과 생략...)

*/
#include <iostream>

using namespace std;


class Console {
public:
    static void start();
    static int menu();
    static int time();
    static int num();
    static string name();
};

void Console::start() {
    cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;
}

int Console::menu() {
    int n;
    cout << "\n예약(1), 취소(2), 보기(3), 끝내기(4) : ";
    cin >> n;
    return n;
}

int Console::time() {
    int t;
    cout << "07시(1), 12시(2), 17시(3) : ";
    cin >> t;
    return t;
}

int Console::num() {
    int num;
    cout << "좌석 번호: ";
    cin >> num;
    return num;
}

string Console::name() {
    string name;
    cout << "이름 입력: ";
    cin >> name;
    return name;
}

class Seat {
private:
    string seatName;
public:
    Seat() { seatName = "---"; }
    string getName() { return seatName; }
    void setName(string name) { seatName = name; }
};

class Schedule {
private:
    Seat* seat;
    string time;
public:
    Schedule() { seat = new Seat[8]; }
    ~Schedule() { delete[] seat; }
    void setTime(string t) { time = t; }
    void show() {
        cout << time << ":\t";
        for (int i = 0; i < 8; i++)
            cout << seat[i].getName() << '\t';
        cout << endl;
    }
    void reservationSeat(int num, string name) {
        seat[num-1].setName(name);
    }
    void cancelSeat(int num, string name) {
        seat[num-1].setName("---");
    }
};

class AirlineBook {
private:
    Schedule* schedule;
public:
    AirlineBook() {
        schedule = new Schedule[3];
        schedule[0].setTime("07시");
        schedule[1].setTime("12시");
        schedule[2].setTime("17시");
    }
    ~AirlineBook() { delete[] schedule; }
    void reservation(int t) {
        schedule[t-1].show();
        int num = Console::num();
        string name = Console::name();
        schedule[t-1].reservationSeat(num, name);
    }
    void cancel(int t) {
        schedule[t-1].show();
        int num = Console::num();
        string name = Console::name();
        schedule[t-1].cancelSeat(num, name);
    }
    void showAll() {
        for (int i = 0; i < 3; i++)
            schedule[i].show();
    }
};

int main() {

    AirlineBook airlinebook;
    Console::start();

    while (true) {
        int n = Console::menu();
        switch (n) {
            case 1: {
                int t = Console::time();
                airlinebook.reservation(t);
                break;
            }
            case 2: {
                int t = Console::time();
                airlinebook.cancel(t);
                break;
            }
            case 3:
                airlinebook.showAll();
                break;
            case 4:
                cout << "\n예약 시스템을 종료합니다." << endl;
                return 0;
        }
    }
}
