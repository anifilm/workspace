/*
파일이름: HighCreditAccount.h
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.8
*/
#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

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

#endif
