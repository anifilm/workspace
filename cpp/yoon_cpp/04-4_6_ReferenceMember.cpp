// 이니셜라이저의 이러한 특징은 멤버변수로 참조자를 선언할 수 있게 합니다.
#include <iostream>

using namespace std;

class AAA {
public:
    AAA() {
        cout << "empty object" << endl;
    }

    void ShowYourName() {
        cout << "I'm class AAA" << endl;
    }
};

class BBB {
private:
    AAA& ref;
    const int& num;

public:
    BBB(AAA& r, const int& n)
        : ref {r}, num {n} {
        // empty constructor body
    }

    void ShowYourName() {
        cout << "and" << endl;
        cout << "I ref num " << num << endl;
    }
};

int main() {

    AAA obj1;
    BBB obj2 {obj1, 20};
    obj2.ShowYourName();

    return 0;
}
