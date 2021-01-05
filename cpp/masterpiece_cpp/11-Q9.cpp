/*
Q9
Phone 클래스의 객체를 입출력하는 아래 코드와 실행 결과를 참조하여 <<, >> 연산자를 작성
하고 Phone 클래스를 수정하는 등 프로그램을 완성하라.
  (코드, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Phone {  // 전화번호를 표현하는 클래스
private:
    string name;
    string telnum;
    string address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    friend istream& operator>>(istream& ins, Phone& a);    // friend 선언
    friend ostream& operator<<(ostream& stream, Phone a);  // friend 선언
};

// >> 연산자 함수
istream& operator>>(istream& ins, Phone& a) {
    cout << "이름: ";
    ins >> a.name;
    cout << "전화번호: ";
    ins >> a.telnum;
    cout << "주소: ";
    ins >> a.address;
    return ins;
}

// << 연산자 함수
ostream& operator<<(ostream& stream, Phone a) {
    stream << "(" << a.name << ", " << a.telnum << ", " << a.address << ")";
    return stream;
}

int main() {

    Phone girl, boy;
    cin >> girl >> boy;  // 전화번호를 키보드로부터 읽는다.
    cout << girl << endl << boy << endl;  // 전화번호를 출력한다.

    return 0;
}
