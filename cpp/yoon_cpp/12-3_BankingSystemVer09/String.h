/*
파일이름: String.h
작성자: 임채영
업데이트: [2021-01-25] 파일버전 0.1
*/
#ifndef __STRING_H__
#define __STRING_H__

#include "BankingCommonDecl.h"

class String {
private:
    char* str;
    int len;
public:
    String();
    String(const char* s);
    String(const String& s);
    ~String();
    String& operator=(const String& s);
    String& operator+=(const String& s);
    bool operator==(const String& s);
    String operator+(const String& s);

    friend ostream& operator<<(ostream& os, const String& s);
    friend istream& operator>>(istream& is, String& s);
};

#endif
