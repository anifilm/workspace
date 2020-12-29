// 디폴트 복사 생성자의 문제점
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char* name;
    int age;
public:
    Person(const char* myname, int myage) {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    // 복사 생성자 (copy constructor), 직접 정의하지 않아도 자동 생성되어 사용 가능하다.
    Person(const Person& copy)
        : name(copy.name), age(copy.age) {
            cout << "called copy constructor" << endl;
    }
    void ShowPersonInfo() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    ~Person() {
        delete[] name;
        cout << "called destructor" << endl;
    }
};

int main() {

    Person man1("Lee dong woo", 29);
    Person man2 = man1;     // 복사 생성자 호출
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}
