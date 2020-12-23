// 클래스 명으로 static 멤버를 접근하는 사례
#include <iostream>

using namespace std;

class Person {
public:
    int money;  // 개인 소유의 돈
    void addMoney(int money) {
        this->money += money;
    }

    static int shareMoney;  // 공금
    static void addShared(int n) {
        shareMoney += n;
    }
};

// static 변수 생성. 전역 공간에 생성
int Person::shareMoney = 10;    // 10으로 초기화

int main() {

    // han 객체가 생기기 전부터 static 멤버 접근
    Person::addShared(50);  // static 멤버 접근. 공금 = 60
    cout << Person::shareMoney << endl;

    Person han;
    han.money = 100;
    han.shareMoney = 200;   // static 멤버 접근. 공금 = 200
    Person::shareMoney = 300;   // static 멤버 접근. 공금 = 300
    Person::addShared(100);     // static 멤버 접근. 공금 = 400

    cout << han.money << ' ' << Person::shareMoney << endl;

    return 0;
}
