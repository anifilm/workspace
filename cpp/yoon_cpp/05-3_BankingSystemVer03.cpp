/*
Banking System Ver 0.3
작성자: 임채영
내 용 : Account 클래스 정의, 복사 생성자 정의
*/
#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu();            // 메뉴 출력
void MakeAccount();         // 계좌개설을 위한 함수
void DepositMoney();        // 입금
void WithdrawMoney();       // 출금
void ShowAllAccInfo();      // 잔액조회

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account {
private:
    int accID;          // 계좌번호
    int balance;        // 잔액
    char* cusName;      // 고객이름
public:
    Account(int ID, int money, char* name)
        : accID(ID), balance(money) {
            cusName = new char[strlen(name) + 1];
            strcpy(cusName, name);
    }
    Account(const Account& ref)
        : accID(ref.accID), balance(ref.balance) {
            cusName = new char[strlen(ref.cusName) + 1];
            strcpy(cusName, ref.cusName);
    }
    int GetAccID() { return accID; }
    void Deposit(int money) { balance += money; }
    int Withdraw(int money) {   // 출금액 반환, 부족시 0반환
        if (balance < money) return 0;
        balance -= money;
        return money;
    }
    void ShowAccInfo() {
        cout << "계좌ID: " << accID << endl;
        cout << "이 름 : " << cusName << endl;
        cout << "잔 액 : " << balance << endl;
        cout << endl;
    }
    ~Account() { delete[] cusName; }
};

Account* accArr[100];
int accNum = 0;              // 저장된 Account 수

int main() {

    int m_select;

    while (1) {
        ShowMenu();
        cout << "선택: ";
        cin >> m_select;

        switch (m_select) {
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowAllAccInfo();
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

void ShowMenu() {
    cout << "------ Menu ------" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
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

void DepositMoney() {
    int id;
    int money;

    cout << "\n[입 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "입금액: "; cin >> money;
    cout << endl;

    for (int i {}; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {
            accArr[i]->Deposit(money);
            cout << "입금완료" << endl << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney() {
    int id;
    int money;

    cout << "\n[출 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "출금액: "; cin >> money;
    cout << endl;

    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {
            if (accArr[i]->Withdraw(money) == 0) {
                cout << "잔액이 부족합니다." << endl << endl;
                return;
            }
            cout << "출금완료" << endl << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo() {
    cout << "\n[계좌정보]\n" << endl;
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
    }
}
