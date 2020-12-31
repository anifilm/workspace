/*
파일이름: AccountHandler.cpp
작성자: 임채영
업데이트: [2020-12-31] 파일버전 0.7
*/
#include "BankingCommonDecl.h"
#include "AccountHandler.h"
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"

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
