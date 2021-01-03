/*
Q11
책의 년도, 책 이름, 저자 이름을 담은 Book 클래스를 만들고, vector<Book> v;로 생성한 벡터를
이용하여 책을 입고하고, 저자와 년도로 검색하는 프로그램을 작성하라.
  (실행 결과 생략...)

*/
#include <iostream>
#include <vector>

using namespace std;

class Book {
private:
    int year;
    string title;
    string author;
public:
    Book(string title, string author, int year) {
        this->year = year;
        this->title = title;
        this->author = author;
    }
    int getYear() { return year; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
};

int main() {

    vector<Book> v;
    v.push_back(Book("열혈 C 프로그래밍", "윤성우", 2010));
    v.push_back(Book("열혈 C++ 프로그래밍", "윤성우", 2010));
    v.push_back(Book("열혈 자료구조", "윤성우", 2012));
    v.push_back(Book("명품 C++ 프로그래밍", "황기태", 2018));
    v.push_back(Book("명품 자바 프로그래밍", "황기태", 2018));
    v.push_back(Book("Java의 정석", "남궁성", 2016));
    v.push_back(Book("C언어의 정석", "남궁성", 2016));

    int year;
    string title, author;

    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

    while (true) {
        cout << "년도: ";
        cin >> year;
        if (year == -1) break;
        cout << "저자: ";
        cin >> author;
        cout << "책이름: ";
        cin >> title;
        v.push_back(Book(title, author, year));
    }
    cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;

    cout << "\n검색하고자 하는 저자 이름을 입력하세요: ";
    cin >> author;
    for (size_t i = 0; i < v.size(); i++) {
        if (v.at(i).getAuthor() == author) {
            cout << v.at(i).getTitle() << '\t';
            cout << v.at(i).getAuthor() << '\t';
            cout << v.at(i).getYear() << endl;
        }
    }

    cout << "\n검색하고자 하는 년도를 입력하세요: ";
    cin >> year;
    for (size_t i = 0; i < v.size(); i++) {
        if (v.at(i).getYear() == year) {
            cout << v.at(i).getTitle() << '\t';
            cout << v.at(i).getAuthor() << '\t';
            cout << v.at(i).getYear() << endl;
        }
    }

    return 0;
}
