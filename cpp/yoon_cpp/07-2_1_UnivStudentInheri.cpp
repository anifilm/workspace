// 상속관련 완전한 예제의 확인 및 실행
#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char name[50];  // 이름
    int age;        // 나이
public:
    Person(const char* myname, int myage)
        : age(myage) {
            strcpy(name, myname);
    }
    void WhatYourName() const {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const {
        cout << "I'm " << age << " years old" << endl;
    }
};

class UnivStudent : public Person {  // Person 클래스의 상속을 의미함
private:
    char major[50];  // 전공 과목
public:
    UnivStudent(const char* myname, int myage, const char* mymajor)
        : Person(myname, myage) {
            strcpy(major, mymajor);
    }
    void WhoAryYou() const {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl;
        cout << endl;
    }
};

int main() {

    UnivStudent ustd1("Lee", 22, "Computer eng.");
    ustd1.WhoAryYou();

    UnivStudent ustd2("Yoon", 21, "Electronic eng.");
    ustd2.WhoAryYou();

    return 0;
}
