/*
파일이름: AccountHandler.h
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.9
*/
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "AccountArray.h"

class AccountHandler {
private:
//  Account* accArr[100];
    BoundCheckAccountPtrArray accArr;
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

#endif