/*
Q11
책의 이름과 가격을 저장하는 다음 Book 클래스에 대해 물음에 답하여라.
  (Buffer 클래스 생략...)

(1) Book 클래스의 생성자, 소멸자, set() 함수를 작성하라. set() 함수는 멤버 변수 title
    에 할당된 메모리가 있으면 먼저 반환한다. 그리고 나서 새로운 메모리를 할당받고 이곳에
    매개 변수로 전달받은 책 이름을 저장한다.
(2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
(3) 디폴트 복사 생성자만 있을 때 아래 main() 함수는 실행 오류가 발생한다.
  (main() 함수 생략...)

다음과 같이 실행 오류가 발생하지 않도록 깊은 복사 생성자를 작성하라.
  명품C++  10000원
  명품자바 12000원

(4) 문제 (3)에서 실행 오류가 발생하는 원인은 Book 클래스에서 C-스트링(char* title)
    방식으로 문자열을 다루었기 때문이다. 복사 생성자를 작성하지 말고 문자열을 string
    클래스를 사용하여, 문제 (3)의 실행 오류가 발생하지 않도록 Book 클래스를 수정하라.
    이 문제를 풀고 나면 문자열을 다룰 때, string을 사용해야하는 이유를 명확히 알게
    될 것이다.
*/
#include <iostream>
#include <cstring>

using namespace std;

class Book {
private:
    char* title;    // 제목 문자열
    int price;      // 가격
public:
    Book(const char* title, int price);
    Book(const Book& b);    // 사용자 정의 복사 생성자
    ~Book();
    void set(const char* title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
    this->price = price;
    int len = strlen(title);
    this->title = new char[len+1];
    strcpy(this->title, title);
}

/* (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드
Book::Book(const Book& b) {
    this->price = b.price;
    this->title = b.title;
}
*/

// 사용자 정의 복사 생성자
Book::Book(const Book& b) {
    this->price = b.price;
    int len = strlen(b.title);
    this->title = new char[len+1];
    strcpy(this->title, b.title);
}

Book::~Book() {
    if (title)
        delete[] title;
}

void Book::set(const char* title, int price) {
    this->price = price;
    strcpy(this->title, title);
}

int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp;    // 복사 생성자 호출됨
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
    return 0;
}
