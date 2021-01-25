/* 문제 11-1 [깊은 복사를 하는 대임 연산자의 정의]
문제 2
Chapter 07의 문제 07-2의 두 번째 문제에서는 다음의 두 클래스 정의를 요구하였다.
  class Book {
  private:
      char* title;  // 책의 제목
      char* isbn;   // 국제 표준 도서번호
      int price;    // 책의 정가
      ...
  };

  class EBook : public Book {
  private:
      char* DRMKey;  // 보안관련 키
      ...
  };

이 때 정의한 두 클래스를 대상으로 Book 클래스도, EBook 클래스도 깊은 복사가 진행이 되도록 복사 생성자와 대입 연산자를
정의하고, 이의 확인을 위한 main() 함수도 적절히 정의해 보자. 참고로 이 문제의 해결을 위해서는 여러분이 생각해봐야 할
요소들이 몇 가지 존재한다. 특히 앞서 말한 다음 사실을 완전히 이해한 다음에 이 문제를 해결하기 바란다.
  "C++에서, AAA형 참조자는 AAA 객체 또는 AAA를 직접 혹은 간접적으로 상속하는 모든 객체를 참조할 수 있다."
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
    Book(const Book& ref)
        : price(ref.price) {
            title = new char[strlen(ref.title)+1];
            isbn = new char[strlen(ref.isbn)+1];
            strcpy(title, ref.title);
            strcpy(isbn, ref.isbn);
            cout << "called copy constructor" << endl;
    }
    Book& operator=(const Book& ref) {
        cout << "Book& operator=()" << endl;
        delete[] title;
        delete[] isbn;

        title = new char[strlen(ref.title)+1];
        isbn = new char[strlen(ref.isbn)+1];
        strcpy(title, ref.title);
        strcpy(isbn, ref.isbn);
        price = ref.price;
        return *this;
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
    EBook(const EBook& ref)
        : Book(ref) {
            DRMKey = new char[strlen(ref.DRMKey)+1];
            strcpy(DRMKey, ref.DRMKey);
    }
    EBook& operator=(const EBook& ref) {
        cout << "EBook& operator=()" << endl;
        Book::operator=(ref);
        delete[] DRMKey;
        DRMKey = new char[strlen(ref.DRMKey)+1];
        strcpy(DRMKey, ref.DRMKey);
        return *this;
    }
    ~EBook() { delete[] DRMKey; }
    void ShowEBookInfo() {
        ShowBookInfo();
        cout << "인증키: " << DRMKey << endl;
    }
};

int main() {

    EBook ebook1("좋은 C++", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    EBook ebook2 = ebook1;  // 복사 생성자 호출
    ebook2.ShowEBookInfo();
    cout << endl;

    EBook ebook3("noname", "nodata", 0, "nodrmkey");
    ebook3 = ebook1;  // 대입 연산자의 호출
    ebook3.ShowEBookInfo();

    return 0;
}
