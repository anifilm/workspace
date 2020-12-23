// static 멤버 함수 getMoney()가 non-static 멤버 변수 money를 접근하는 오류
#include <iostream>

using namespace std;

class PersonError {
private:
    int money;
public:
    static int getMoney() { return money; }
    // 컴파일 오류. static 멤버 함수는 non-static 멤버 변수에 접근 불가

    void setMoney(int money) {
        this->money = money;    // 정상 코드
    }
};

int main() {

    int n = PersonError::GetMoney();

    PersonError errorKim;
    errorKim.setMoney(100);

    return 0;
}

/*

static 멤버 함수의 특징 1

- static 멤버 함수는 오직 static 멤버들만 접근
static 멤버 함수는 오직 static 멤버 변수에 접근하거나 static 멤버 함수만 호출할 수 있다.
static 멤버 함수는 객체가 생성되지 않은 어떤시점에서도 호출될 수 있고, 클래스 이름으로
직접 호출될 수 있기 때문에, static 멤버 함수에서 non-static 멤버에 접근하는 것은 허용
되지 않는다.

*/
