/*
Q2
Book 객체를 활용하는 사례이다.
  (연산 내용, 실행 결과 생략...)

  (1) 세 개의 == 연산자 함수를 가진 Book 클래스를 작성하라
  (2) 세 개의 == 연산자 함수를 프렌드 함수로 작성하라
*/
#include <iostream>

using namespace std;

class Book {
private:
    string title;
    int price, pages;
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
    }
    string getTitle() { return title; }
    bool operator==(int op2);     // a == 30000
    bool operator==(string op2);  // a == "명품 C++"
    bool operator==(Book op2);    // a == b
};

bool Book::operator==(int op2) {
    if (price == op2) return true;
    else return false;
}

bool Book::operator==(string op2) {
    if (title == op2) return true;
    else return false;
}

bool Book::operator==(Book op2) {
    if (title == op2.title && price == op2.price && pages == op2.pages) return true;
    else return false;
}

int main() {

    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if (a == 30000) cout << "정가 30000원" << endl;  // price 비교
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;  // 책 title 비교
    if (a == b) cout << "두 책이 같은 책입니다." << endl;    // title, price, pages 모두 비교
    else cout << "두 책은 같은 책이 아닙니다." << endl;

    return 0;
}
