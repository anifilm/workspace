/*
파일이름: Account.h
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.9
*/
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account {
private:
    int accID;          // 계좌번호
    int balance;        // 잔액
    String cusName;     // 고객이름
public:
    Account(int ID, int money, String name);
    /*
    Account(const Account& ref);
    Account& operator=(const Account& ref);  // 대입 연산자를 통한 깊은 복사
    ~Account();
    */
    int GetAccID() const;
    virtual void Deposit(int money);  // 가상함수 선언
    int Withdraw(int money);
    void ShowAccInfo() const;
};

#endif
