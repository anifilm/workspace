// 깊은 복사를 위한 복사 생성자의 정의
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
    // 복사 생성자 (copy constructor), 개체 생성시 깊은 복사가 되도록 직접 정의할 수 있다.
    Person(const Person& copy)
        : age(copy.age) {
            name = new char[strlen(copy.name) + 1];
            strcpy(name, copy.name);
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
