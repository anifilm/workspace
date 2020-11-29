// 클래스 default 생성자 (defualt)
#include <iostream>
#include <string>

using namespace std;

class Class1 {
public:
    int number;
    double prime;
    string word;

    // 디폴트 생성자 Class1() {}와 같다.
    // (C++11에서 추가된 명시적인 디폴트 생성자, explicitly defaulted constructor)
    // 멤버변수를 초기화 시켜줌
    Class1() = default;
};

class Class2 {
public:
    int number;
    double prime;
    string word;

    Class2() {}
};

int main() {

    Class1* class1 = new Class1();
    cout << "Class1: " << class1->number << ", " << class1->prime << ", " << class1->word << endl;

    Class2* class2 = new Class2();
    cout << "Class2: " << class2->number << ", " << class2->prime << ", " << class2->word << endl;

    return 0;
}
