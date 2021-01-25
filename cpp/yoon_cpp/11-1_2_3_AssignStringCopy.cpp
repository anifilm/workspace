// 디폴트 대입 연산자의 문제점 해결 (string 클래스 사용)
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string myname, int myage) {
        name = myname;
        age = myage;
    }
    ~Person() {
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
    man2 = man1;  // 디폴트 복사 생성자 사용 (문자열 대입연산 가능, 깊은 복사)

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}
