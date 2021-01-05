/*
Q8
Circle 클래스의 객체를 입출력하는 다음 코드와 실행 결과를 참조하여 <<, >> 연산자를
작성하고 Circle 클래스를 수정하는 등 프로그램을 완성하라.
  (다음 코드, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    string name;
    int radius;
public:
    Circle(int radius = 1, string name = "") {
        this->radius = radius; this->name = name;
    }
    friend istream& operator>>(istream& ins, Circle& a);    // friend 선언
    friend ostream& operator<<(ostream& stream, Circle a);  // friend 선언
};

// >> 연산자 함수
istream& operator>>(istream& ins, Circle& a) {
    cout << "반지름: ";
    ins >> a.radius;
    cout << "이름: ";
    ins >> a.name;
    return ins;
}

// << 연산자 함수
ostream& operator<<(ostream& stream, Circle a) {
    stream << "(반지름 " << a.radius << "인 " << a.name << ")";
    return stream;
}

int main() {

    Circle d, w;
    cin >> d >> w;  // 키보드 입력을 받아 객체 d와 w를 완성
    cout << d << w << endl;  // 객체 d, w 출력

    return 0;
}
