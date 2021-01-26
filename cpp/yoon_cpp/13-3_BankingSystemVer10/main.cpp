/*
소프트웨어 버전: Banking System ver 0.9

파일이름: main.cpp
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.9
*/
#include "BankingCommonDecl.h"
#include "AccountHandler.h"

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
