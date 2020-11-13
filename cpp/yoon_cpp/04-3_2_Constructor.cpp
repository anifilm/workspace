// 생성자의 이해 2
#include <iostream>

using namespace std;

class SimpleClass {
private:
    int num1;
    int num2;

public:
    SimpleClass(int n1 = 0, int n2 = 0) {
        num1 = n1;
        num2 = n2;
    }

    void ShowData() const {
        cout << num1 << ", " << num2 << endl;
    }
};

int main() {

    SimpleClass sc1();          // 함수의 원형 선언
    SimpleClass mysc = sc1();   // 함수를 호출하여 mysc 객체를 초기화
    mysc.ShowData();

    return 0;
}

SimpleClass sc1() {
    SimpleClass sc(20, 30);
    return sc;
}
