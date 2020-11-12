// OOP 단계별 프로젝트 1단계
#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu();            // 메뉴 출력
void MakeAccount();         // 계좌개설을 위한 함수
void DepositMoney();        // 입금
void WithdrawMoney();       // 출금
void ShowAllAccInfo();      // 잔액조회

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct {
    int accID;              // 계좌번호
    int balance;            // 잔액
    char cusName[NAME_LEN]; // 고객이름
} Account;

Account accArr[100];        // Account 저장을 위한 배열
int accNum {};              // 저장된 Account 수

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
                cout << "\n잘못 입력하였습니다." << endl;
                break;
        }
        cout << endl;
    }
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
    char name[NAME_LEN];
    int balance;

    cout << "[계좌개설]" << endl;
    cout << "계좌ID: "; cin >> id;
    cin.ignore(32767, '\n');        // 문자입력 받기 전에 개행을 스트림에서 제거
    cout << "이 름 : ";
    cin.getline(name, NAME_LEN);    // 공백을 포함하여 문자 입력 받음
    cout << "입금액: "; cin >> balance;
    cout << endl;

    accArr[accNum].accID = id;
    accArr[accNum].balance = balance;
    strcpy(accArr[accNum].cusName, name);
    accNum++;
}

void DepositMoney() {
    int money;
    int id;

    cout << "[입 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "입금액: "; cin >> money;
    cout << endl;

    for (int i {}; i < accNum; i++) {
        if (accArr[i].accID == id) {
            accArr[i].balance += money;
            cout << "입금완료" << endl << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney() {
    int money;
    int id;

    cout << "[출 금]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "출금액: "; cin >> money;
    cout << endl;

    for (int i {}; i < accNum; i++) {
        if (accArr[i].accID == id) {
            if (accArr[i].balance < money) {
                cout << "잔액이 부족합니다." << endl << endl;
                return;
            }
            accArr[i].balance -= money;
            cout << "출금완료" << endl << endl;
            return;
        }
    }
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo() {
    cout << "\n[계좌정보]\n" << endl;
    for (int i {}; i < accNum; i++) {
        cout << "계좌ID: " << accArr[i].accID << endl;
        cout << "이 름 : " << accArr[i].cusName << endl;
        cout << "잔 액 : " << accArr[i].balance << endl;
        cout << endl;
    }
}
