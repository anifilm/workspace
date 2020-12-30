/*
Banking System Ver 0.5
작성자: 임채영
내 용 : AccountHander 클래스 정의
*/
#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

/*
클래스: Account
유형 : Entity 클래스
*/
class Account {
private:
    int accID;          // 계좌번호
    int balance;        // 잔액
    char* cusName;      // 고객이름
public:
    Account(int ID, int money, char* name);
    Account(const Account& ref);
    ~Account();
    int GetAccID() const;
    void Deposit(int money);
    int Withdraw(int money);
    void ShowAccInfo() const;
};

Account::Account(int ID, int money, char* name)
    : accID(ID), balance(money) {
        cusName = new char[strlen(name) + 1];
        strcpy(cusName, name);
}
Account::Account(const Account& ref)
    : accID(ref.accID), balance(ref.balance) {
        cusName = new char[strlen(ref.cusName) + 1];
        strcpy(cusName, ref.cusName);
}
Account::~Account() { delete[] cusName; }

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money) { balance += money; }

int Account::Withdraw(int money) {   // 출금액 반환, 부족시 0반환
    if (balance < money) return 0;
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const {
    cout << "계좌ID: " << accID << endl;
    cout << "이 름 : " << cusName << endl;
    cout << "잔 액 : " << balance << endl;
    cout << endl;
}

/*
클래스: AccountHander
유형: Control 클래스
*/
class AccountHander {
private:
    Account* accArr[100];
    int accNum;
public:
    AccountHander();
    ~AccountHander();
    void ShowMenu() const;        // 메뉴 출력
    void MakeAccount();           // 계좌개설을 위한 함수
    void DepositMoney();          // 입금
    void WithdrawMoney();         // 출금
    void ShowAllAccInfo() const;  // 잔액조회
};

AccountHander::AccountHander() : accNum(0) {}
AccountHander::~AccountHander() {
    for (int i = 0; i < accNum; i++)
        delete accArr[i];
}

void AccountHander::ShowMenu() const {
    cout << "------ Menu ------" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void AccountHander::MakeAccount() {
    int id;
    int balance;
    char name[NAME_LEN];

    cout << "\n[계좌개설]" << endl;
    cout << "계좌ID: "; cin >> id;
    cin.ignore(32767, '\n');        // 문자입력 받기 전에 개행을 스트림에서 제거
    cout << "이 름 : ";
    cin.getline(name, NAME_LEN);    // 공백을 포함하여 문자 입력 받음
    cout << "입금액: "; cin >> balance;
    cout << endl;

    accArr[accNum++] = new Account(id, balance, name);
}

void AccountHander::DepositMoney() {
    int id;
    int money;

    cout << "\n[입 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "입금액: "; cin >> money;
    cout << endl;

    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {
            accArr[i]->Deposit(money);
            cout << "입금완료" << endl;
            cout << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl;
    cout << endl;
}

void AccountHander::WithdrawMoney() {
    int id;
    int money;

    cout << "\n[출 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "출금액: "; cin >> money;
    cout << endl;

    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {
            if (accArr[i]->Withdraw(money) == 0) {
                cout << "잔액이 부족합니다." << endl;
                cout << endl;
                return;
            }
            cout << "출금완료" << endl;
            cout << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl;
    cout << endl;
}

void AccountHander::ShowAllAccInfo() const {
    cout << "\n[계좌정보]\n" << endl;
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
    }
}

/*
Control 클래스 AccountHander 중심으로 변경된 main() 함수

*/
int main() {

    AccountHander manager;
    int m_select;

    while (true) {
        manager.ShowMenu();
        cout << "선택: ";
        cin >> m_select;

        switch (m_select) {
            case MAKE:
                manager.MakeAccount();
                break;
            case DEPOSIT:
                manager.DepositMoney();
                break;
            case WITHDRAW:
                manager.WithdrawMoney();
                break;
            case INQUIRE:
                manager.ShowAllAccInfo();
                break;
            case EXIT:
                cout << "\n프로그램을 종료합니다." << endl;
                return 0;
            default:
                cout << "\n잘못 입력하였습니다.\n" << endl;
                break;
        }
    }
    return 0;
}
