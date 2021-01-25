// 디폴트 대입 연산자의 문제점
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
    man2 = man1;  // 디폴트 복사 생성자 사용 (얕은 복사)

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}
