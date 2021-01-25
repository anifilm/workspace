// 디폴트 대입 연산자의 문제점 해결 (대입 연산자의 오버로딩)
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
    Person& operator=(const Person& ref) {
        delete[] name;  // 메모리의 누스를 막기 위한 메모리 해제 연산
        int len = strlen(ref.name) + 1;
        name = new char[len];
        strcpy(name, ref.name);
        age = ref.age;
        return *this;
    }
    ~Person() {
        delete[] name;
        cout << "called destructor!" << endl;
    }
    void ShowPersonInfo() const {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
};

int main() {

    Person man1("Lee dong woo", 29);
    Person man2("Yoon ji yul", 22);
    man2 = man1;  // 오버로딩 된 대입 연산자를 사용 (깊은 복사)

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}
