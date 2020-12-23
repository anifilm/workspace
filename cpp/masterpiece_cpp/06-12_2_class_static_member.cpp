// static 멤버 함수의 특징 2
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
    //  this->shareMoney += n;  // this를 사용하게 되면 컴파일 오류
        shareMoney += n;
    }

    // non-static 함수는 non-static이나 static 멤버에 모두 접근 가능
    int total() {
        return money + shareMoney;
    }
};

/*

static 멤버 함수의 특징

- static 멤버 함수는 오직 static 멤버들만 접근
(06-12-1 내용에 이어서...)

그러나 반대로 non-static 멤버 함수는 static 멤버를 접근하는데 전혀 제약이 없다.
Person 클래스에 total() 함수를 위와 같이 구현해도 정상 코드이다.

- static 멤버 함수는 this를 사용할 수 없다.
static 멤버 함수는 객체가 생기기 전부터 호출 가능하므로, static 멤버 함수에서
this를 사용할 수 없도록 제약한다. Person 클래스의 addShared() 함수를 위와 같이
수정하면 컴파일 오류가 발생한다.

*/

int Person::shareMoney = 10;

int main() {

    Person::addShared(50);
    cout << Person::shareMoney << endl;

    Person han;
    han.money = 100;
    han.shareMoney = 200;
    Person::shareMoney = 300;
    Person::addShared(100);

    cout << han.money << ' ' << Person::shareMoney << endl;

    return 0;
}
