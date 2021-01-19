#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

// NameCard 구조체 변수의 동적 할당 및 초기화 후 주소 값 반환
NameCard* MakeNameCard(const char* name, const char* phone) {
    NameCard* newCard = (NameCard*)malloc(sizeof(NameCard));
    strcpy(newCard->name, name);
    strcpy(newCard->phone, phone);
    return newCard;
}

// NameCard 구조체 변수의 정보 출력
void ShowNameCardInfo(NameCard* pcard) {
    printf("이름: %s\t", pcard->name);
    printf("전화번호: %s\n", pcard->phone);
}

// 이름이 같으면 0, 다르면 0이 아닌 값 반환
int NameCompare(NameCard* pcard, const char* name) {
    return strcmp(pcard->name, name);
}

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard* pcard, const char* phone) {
    strcpy(pcard->phone, phone);
}
