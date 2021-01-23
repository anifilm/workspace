// 배열 기반의 리스트 구현
#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist) {  // 초기화
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}

void LInsert(List* plist, LData data) {  // 데이터 저장
    if (plist->numOfData >= LIST_LEN) {  // 리스트가 가득차 있다면
        puts("저장이 불가능합니다.");
        return;
    }

    plist->arr[plist->numOfData] = data;  // 데이터를 저장한 후
    (plist->numOfData)++;  // 저장된 데이터의 수 증가
}

int LFirst(List* plist, LData* pdata) {  // 첫 데이터 참조
    if (plist->numOfData == 0)  // 저장된 데이터가 없다면
        return FALSE;  // false 반환

    (plist->curPosition) = 0;
    *pdata = plist->arr[0];  // pdata를 참조로 리스트의 첫 번째 요소를 전달 후
    return TRUE;  // true 반환
}

int LNext(List* plist, LData* pdata) {   // 두 번째 이후 데이터 참조
    if (plist->curPosition >= (plist->numOfData) - 1)  // 데이터 참조 커서가 저장된 데이터의 수 보다 크면
        return FALSE;  // false 반환

    (plist->curPosition)++;  // 데이터 참조 커서를 다음으로 옮기고
    *pdata = plist->arr[plist->curPosition];  // pdata를 참조로 리스트의 참조 커서가 가리키는 요소를 전달 후
    return TRUE;  // true 반환
}

LData LRemove(List* plist) {  // 참조한 데이터 삭제
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];  // (삭제 대상)데이터 참조 커서가 가리키는 데이터를 rdata에 저장

    for (i = rpos; i < num - 1; i++)
        plist->arr[i] = plist ->arr[i + 1];  // 데이터를 하나씩 당겨서 자료를 삭제

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;  // rdata에 저장했던 데이터를 반환 (삭제 대상)
}

int LCount(List* plist) {     // 저장된 데이터의 수 반환
    return plist->numOfData;
}
