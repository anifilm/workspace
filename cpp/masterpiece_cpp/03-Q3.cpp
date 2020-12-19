/*
Q3
은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가
필요하다. 계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
main() 함수의 실행 결과가 다음과 같도록 Account 클래스를 작성하라.
    (main() 함수, 실행 결과 생략...)

*/
#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string name;
    int id;
    int balance;
public:
    Account(string name, int id, int balance);
    string getOwner();
    void deposit(int money);
    int withdraw(int money);
    int inquiry();
};

Account::Account(string name, int id, int balance)
    : name(name), id(id), balance(balance) {
}

string Account::getOwner() {
    return name;
}

void Account::deposit(int money) {
    balance += money;
}

int Account::withdraw(int money) {
    balance -= money;
    return money;
}

int Account::inquiry() {
    return balance;
}

int main() {

    Account a("anifilm", 1, 5000);    // id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
    a.deposit(50000);   // 50000원 저금
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);  // 20000원 출금, withdraw()는 출금한 실제 금액 리턴
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}
