/*
Banking System Ver 0.6
작성자: 임채영
내 용 : 이자관련 계좌 클래스의 추가
*/
#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;
// 프로그램 사용자의 선택 메뉴
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
// 신용 등급
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };
// 계좌의 종류
enum { NORMAL = 1, CREDIT = 2 };

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
    virtual void Deposit(int money);  // 가상함수 선언
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
클래스: NormalAccount
유형 : Entity 클래스
*/
class NormalAccount : public Account {
private:
    int interRate;  // 이자율 %단위
public:
    NormalAccount(int ID, int money, char* name, int rate)
        : Account(ID, money, name), interRate(rate) {
    }
    virtual void Deposit(int money) {
        Account::Deposit(money);  // 원금 추가
        Account::Deposit(money * (interRate/100.0));  // 이자 추가
    }
};

/*
클래스: HighCreditAccount
유형 : Entity 클래스
*/
class HighCreditAccount : public NormalAccount {
private:
    int specialRate;
public:
    HighCreditAccount(int ID, int money, char* name, int rate, int special)
        : NormalAccount(ID, money, name, rate), specialRate(special) {
    }
    virtual void Deposit(int money) {
        NormalAccount::Deposit(money);  // 원금 추가
        NormalAccount::Deposit(money * (specialRate/100.0));  // 특별이자 추가
    }
};

/*
클래스: AccountHandler
유형: Control 클래스
*/
class AccountHandler {
private:
    Account* accArr[100];
    int accNum;
public:
    AccountHandler();
    ~AccountHandler();
    void ShowMenu() const;        // 메뉴 출력
    void MakeAccount();           // 계좌개설을 위한 함수
    void DepositMoney();          // 입금
    void WithdrawMoney();         // 출금
    void ShowAllAccInfo() const;  // 잔액조회
protected:
    void MakeNormalAccount();
    void MakeCreditAccount();
};

AccountHandler::AccountHandler() : accNum(0) {}
AccountHandler::~AccountHandler() {
    for (int i = 0; i < accNum; i++)
        delete accArr[i];
}

void AccountHandler::ShowMenu() const {
    cout << "------ Menu ------" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void AccountHandler::MakeAccount() {
    int sel;
    cout << "\n[계좌종류 선택]" << endl;
    cout << "1. 보통예금 계좌" ;
    cout << "2. 신용신뢰 계좌" << endl;
    cout << "선택: ";
    cin >> sel;

    if (sel == NORMAL)
        MakeNormalAccount();
    else
        MakeCreditAccount();
}

void AccountHandler::MakeNormalAccount() {
    int id;
    int balance;
    int interRate;
    char name[NAME_LEN];

    cout << "\n[보통예금 계좌 개설]" << endl;
    cout << "계좌ID: "; cin >> id;
    cin.ignore(32767, '\n');        // 문자입력 받기 전에 개행을 스트림에서 제거
    cout << "이 름 : ";
    cin.getline(name, NAME_LEN);    // 공백을 포함하여 문자 입력 받음
    cout << "입금액: "; cin >> balance;
    cout << "이자율: "; cin >> interRate;
    cout << endl;

    accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount() {
    int id;
    int balance;
    int interRate;
    int creditLevel;
    char name[NAME_LEN];

    cout << "\n[신용신뢰 계좌 개설]" << endl;
    cout << "계좌ID: "; cin >> id;
    cin.ignore(32767, '\n');        // 문자입력 받기 전에 개행을 스트림에서 제거
    cout << "이 름 : ";
    cin.getline(name, NAME_LEN);    // 공백을 포함하여 문자 입력 받음
    cout << "입금액: "; cin >> balance;
    cout << "이자율: "; cin >> interRate;
    cout << "신용등급(1toA, 2toB, 3toC): "; cin >> creditLevel;
    cout << endl;

    switch(creditLevel) {
        case 1:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
            break;
        case 2:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
            break;
        case 3:
            accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
            break;
    }
}

void AccountHandler::DepositMoney() {
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

void AccountHandler::WithdrawMoney() {
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

void AccountHandler::ShowAllAccInfo() const {
    cout << "\n[계좌정보]\n" << endl;
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
    }
}

/*
Control 클래스 AccountHandler 중심으로 변경된 main() 함수

*/
int main() {

    AccountHandler manager;
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
