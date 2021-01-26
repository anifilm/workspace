/*
파일이름: Account.cpp
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.9
*/
#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, String name)
    : accID(ID), balance(money) {
    //  cusName = new char[strlen(name) + 1];
    //  strcpy(cusName, name);
    cusName = name;
}
/*
Account::Account(const Account& ref)
    : accID(ref.accID), balance(ref.balance) {
        cusName = new char[strlen(ref.cusName) + 1];
        strcpy(cusName, ref.cusName);
}
Account& Account::operator=(const Account& ref) {  // 대입 연산자를 통한 깊은 복사
    accID = ref.accID;
    balance = ref.balance;

    delete[] cusName;
    cusName = new char[strlen(ref.cusName) + 1];
    strcpy(cusName, ref.cusName);
    return *this;
}
Account::~Account() { delete[] cusName; }
*/
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
