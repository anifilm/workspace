/* 문제 07-2 [IS-A 관계의 상속]
문제 2
'책'을 의미하는 Book 클래스와 '전자 책'을 의미하는 EBook 클래스를 정의하고자 한다.
그런데 '전자 책'도 '책'의 일종이므로, 다음의 형태로 클래스의 상속관계를 구성하고자
한다. (클래스에 선언되어야 할 멤버변수만 제시하였다.)
  (Book 클래스, EBook 클래스 생략...)

위의 EBook 클래스에 선언된 멤버 DRMKey는 전차 책에 삽입이 되는 보안관련 키(key)의
정보를 의미한다. 그럼 다음 main() 함수와 함께 실행이 가능하도록 위의 클래스를 완성해
보자.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <cstring>

using namespace std;

class Book {
private:
    char* title;  // 책의 제목
    char* isbn;   // 국제 표준 도서번호
    int price;    // 책의 정가
public:
    Book(const char* title, const char* isbn, int price)
        : price(price) {
            this->title = new char[strlen(title)+1];
            this->isbn = new char[strlen(isbn)+1];
            strcpy(this->title, title);
            strcpy(this->isbn, isbn);
    }
    ~Book() {
        delete[] title;
        delete[] isbn;
    }
    void ShowBookInfo() {
        cout << "제목: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "가격: " << price << endl;
    }
};

class EBook : public Book {
private:
    char* DRMKey;  // 보안관련 키
public:
    EBook(const char* title, const char* isbn, int price, const char* DRMKey)
        : Book(title, isbn, price) {
            this->DRMKey = new char[strlen(DRMKey)+1];
            strcpy(this->DRMKey, DRMKey);
    }
    ~EBook() { delete[] DRMKey; }
    void ShowEBookInfo() {
        ShowBookInfo();
        cout << "인증키: " << DRMKey << endl;
    }
};

int main() {

    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;

    EBook ebook("좋은 C++", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();

    return 0;
}
