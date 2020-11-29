// 함수 오버라이딩 이해하기
#include <iostream>

using namespace std;

class Base {
public:
    void Display() {
        cout << "고려 16대왕 예종" << endl;
    }
};

class Derived : Base {
public:
    void Display() {
        cout << "고려 17대왕 인종" << endl;
    }
};

int main() {

    Derived child;
    child.Display();

    return 0;
}
