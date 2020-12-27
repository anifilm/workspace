/*
Open Challenge - 상속 관계의 클래스 작성
다음과 같은 상속 관계를 가진 Product, Book, CompactDisc, ConversationBook 클래스를
작성하고 아래 실행 화면과 같이 상품을 관리하는 프로그램을 작성하라.

Product 클래스는 상품의 식별자(id), 상품 설명, 생성자, 가격을 나타내는 정보를 포함한다.
Book 클래스는 ISBN 번호, 저자, 책 제목 정보를 포함한다. CompactDisc 클래스는 앨범 제목,
가수 이름 정보를 포함한다. ConversationBook은 회화 책에서 다루는 언어 명 정보를 포함
한다. 객체 지향 개념에 부합하도록 적절한 접근 지정자, 멤버 변수 및 함수, 생성자 등을
작성하라. main()에서는 최대 100개의 상품을 관리하며, 모든 상품의 정보를 조회할 수 있다.
상품의 식별자는 상품을 등록할 때 자동으로 붙인다.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Product {
protected:
    int id;          // 상품의 식별자
    string description; // 상품 설명
    string product;  // 생산자
    int price;       // 가격
public:
    Product() {}
    Product(int id, string description, string product, int price) {
        this->id = id; this->description = description; this->product = product; this->price = price;
    }
    virtual void show() = 0;
};

class Book : public Product {
protected:
    string ISBN;    // ISBN 번호
    string author;  // 저자
    string title;   // 책 제목
public:
    Book() {}
    Book(int id, string description, string product, int price, string ISBN, string author, string title)
        : Product(id, description, product, price) {
            this->ISBN = ISBN; this->author = author; this->title = title;
    }
    void show();
};

class ConversationBook : public Book {
protected:
    string language;  // 언어 명
public:
    ConversationBook() {}
    ConversationBook(int id, string description, string product, int price, string ISBN, string author, string title, string language)
        : Book(id, description, product, price, ISBN, author, title) {
            this->language = language;
    }
    void show();
};

class CompactDisc : public Product {
protected:
    string album;   // 앨범 제목
    string singer;  // 가수 이름
public:
    CompactDisc(int id, string description, string product, int price, string album, string singer)
        : Product(id, description, product, price) {
            this->album = album; this->singer = singer;
    }
    void show();
};

void Book::show() {
    cout << "\n--- 상품 ID: " << id << endl;
    cout << "상품 설명: " << description << endl;
    cout << "가격: " << price << endl;
    cout << "생산자: " << product << endl;
    cout << "책제목: " << title << endl;
    cout << "저자: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
}

void ConversationBook::show() {
    cout << "\n--- 상품 ID: " << id << endl;
    cout << "상품 설명: " << description << endl;
    cout << "가격: " << price << endl;
    cout << "생산자: " << product << endl;
    cout << "책제목: " << title << endl;
    cout << "저자: " << author << endl;
    cout << "언어: " << language << endl;
    cout << "ISBN: " << ISBN << endl;
}

void CompactDisc::show() {
    cout << "\n--- 상품 ID: " << id << endl;
    cout << "상품 설명: " << description << endl;
    cout << "가격: " << price << endl;
    cout << "생산자: " << product << endl;
    cout << "앨범제목: " << album << endl;
    cout << "가수: " << singer << endl;
}

int main() {

    Product* p[100];
    int choice1, choice2, id = 0, price;
    string description, product, ISBN, author, title, language, album, singer;

    cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
    while (true) {
        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) : ";
        cin >> choice1;
        switch (choice1) {
            case 1:
                cout << "상품 종류 - 책(1), 음악CD(2), 회화책(3) : ";
                cin >> choice2; cin.ignore();
                switch (choice2) {
                    case 1: {
                        cout << "상품설명: "; getline(cin, description);
                        cout << "생산자: "; getline(cin, product);
                        cout << "가격: "; cin >> price; cin.ignore();
                        cout << "책제목: "; getline(cin, title);
                        cout << "저자: "; getline(cin, author);
                        cout << "ISBN: "; getline(cin, ISBN);
                        cout << endl;
                        Book* b = new Book(id, description, product, price, ISBN, author, title);
                        p[id] = b;
                        break;
                    }
                    case 2: {
                        cout << "상품설명: "; getline(cin, description);
                        cout << "생산자: "; getline(cin, product);
                        cout << "가격: "; cin >> price; cin.ignore();
                        cout << "앨범제목: "; getline(cin, album);
                        cout << "가수: "; getline(cin, singer);
                        cout << endl;
                        CompactDisc* c = new CompactDisc(id, description, product, price, album, singer);
                        p[id] = c;
                        break;
                    }
                    case 3: {
                        cout << "상품설명: "; getline(cin, description);
                        cout << "생산자: "; getline(cin, product);
                        cout << "가격: "; cin >> price; cin.ignore();
                        cout << "책제목: "; getline(cin, title);
                        cout << "저자: "; getline(cin, author);
                        cout << "언어: "; getline(cin, language);
                        cout << "ISBN: "; getline(cin, ISBN);
                        cout << endl;
                        ConversationBook *cb = new ConversationBook(id, description, product, price, ISBN, author, title, language);
                        p[id] = cb;
                        break;
                    }
                }
                id++;
                break;
            case 2:
                for (int i = 0; i < id; i++)
                    p[i]->show();
                break;
            case 3:
                cout << "\n프로그램을 종료합니다." << endl;
                return 0;
        }
    }
}
