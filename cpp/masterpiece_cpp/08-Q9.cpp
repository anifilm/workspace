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

class AirlineBook {
private:

public:

};

class Schedule {
private:

public:

};

class Seat {
private:

public:

};

class Console {
private:

public:

};

int main() {

    AirlineBook* airlinebook = new AirlineBook();

    cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;

    cout << "예약(1), 취소(2), 보기(3), 끝내기(4) : ";
    cout << "07시(1), 12시(2), 17시(3) : ";
    cout << "07시: ";
    cout << "좌석 번호: ";
    cout << "이름 입력: ";

    cout << "예약 시스템을 종료합니다." << endl;

    return 0;
}
