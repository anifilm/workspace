#include <iostream>

using namespace std;

class AAA {
private:
    int num;
public:
    AAA(int n = 0) : num(n) {
        cout << "AAA(int n = 0)" << endl;
    }
    AAA(const AAA& ref) : num(ref.num) {
        cout << "AAA(const AAA& ref)" << endl;
    }
    AAA& operator=(const AAA& ref) {
        num = ref.num;
        cout << "operator=(const AAA& ref)" << endl;
        return *this;
    }
};

class BBB {
private:
    AAA mem;
public:
    BBB(const AAA& ref) : mem(ref) {}
    /*
    "이니셜라이저를 이용하면 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성된다."
    */
};

class CCC {
private:
    AAA mem;
public:
    CCC(const AAA& ref) { mem = ref; }
    /*
    "생성자의 몸체부분에서 대입연산을 통한 초기화를 진행하면, 선언과 초기화를 각각 별도의 문장에서
    진행하는 형태로 바이너리 코드가 생성된다."
    */
};

int main() {

    AAA obj1(12);
    cout << "*************************" << endl;
    BBB obj2(obj1);  // 이니셜라이저를 이용한 멤버 초기화
    cout << "*************************" << endl;
    CCC obj3(obj1);  // 대입연산을 이용한 멤버 초기화

    return 0;
}
