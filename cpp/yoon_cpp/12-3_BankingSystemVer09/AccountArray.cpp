/*
파일이름: AccountArray.c
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.1
*/
#include "BankingCommonDecl.h"
#include "AccountArray.h"

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int len) : arrlen(len) {
    arr = new ACCOUNT_PTR[len];
}

BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray() {
    delete[] arr;
}

ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[](int idx) {
    if (idx < 0 || idx >= arrlen) {
        cout << "Array index out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
}

ACCOUNT_PTR BoundCheckAccountPtrArray::operator[](int idx) const {
    if (idx < 0 || idx >= arrlen) {
        cout << "Array index out of bound exception" << endl;
        exit(1);
    }
    return arr[idx];
}

int BoundCheckAccountPtrArray::GetArrLen() const {
    return arrlen;
}
