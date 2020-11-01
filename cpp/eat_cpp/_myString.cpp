#include <iostream>
#include <cstring>

using namespace std;

class MyString {
    char *string_content;		// 문자열 데이터를 가리키는 포인터
    int string_length;			// 문자열 길이

public:
    // 문자 하나로 생성
    MyString(char c);
    // 문자열로 부터 생성
    MyString(const char *str);		// overloaded constructor
    MyString(const MyString &str);	// copy constructor

    ~MyString();					// distructor

    int get_length() const;			// getter

    void print();
    void println();
};

MyString::MyString(char c) {
    string_content = new char[1];
    string_content[0] = c;
}

MyString::MyString(const char *str) {
    string_length = strlen(str);
    string_content = new char[string_length];

    for (int i {0}; i != string_length; i++)
        string_content[i] = str[i];
}

MyString::MyString(const MyString &str) {
    string_length = str.string_length;
    string_content = new char[string_length];

    for (int i {0}; i != string_length; i++)
        string_content[i] = str.string_content[i];
}

MyString::~MyString() { delete[] string_content; }

int MyString::get_length() const { return string_length; }

void MyString::print() {
    for (int i {0}; i != string_length; i++)
        cout << string_content[i];
}

void MyString::println() {
    for (int i {0}; i != string_length; i++)
        cout << string_content[i];

    cout << endl;
}

int main() {

    MyString str1("Hello, World!");
    MyString str2(str1);

    str1.println();
    str2.println();
}
