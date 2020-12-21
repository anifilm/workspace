/* 이론 문제
Q8
다음 프로그램이 실행될 때 출력되는 결과는 무엇인가?
*/
#include <iostream>

using namespace std;

class Color {
    string c;
public:
    Color() { c = "white"; cout << "디폴트 생성자" << endl; }
    Color(string c) { this->c = c; cout << "매개변수 생성자" << endl; }
    ~Color() { cout << "소멸자" << endl; }
};

class Palette {
    Color* p;
public:
    Palette() { p = new Color[3]; }
    ~Palette() { delete[] p; }
};

int main() {

    Palette* p = new Palette();
    delete p;

    return 0;
}

/*
Answer:
디폴트 생성자
디폴트 생성자
디폴트 생성자
소멸자
소멸자
소멸자

*/
