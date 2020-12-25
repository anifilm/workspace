/*
Q3
다음 연산을 통해 공짜 책인지를 판별하도록 ! 연산자를 작성하라.
  (연산 내용, 실행 결과 생략...)

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
    bool operator!();
};

bool Book::operator!() {
    if (price == 0) return true;
    else return false;
}

int main() {

    Book book("벼룩시장", 0, 50);   // 가격은 0
    if (!book) cout << "공짜다" << endl;

    return 0;
}
