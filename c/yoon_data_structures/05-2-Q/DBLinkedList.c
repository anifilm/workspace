#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List* plist) {
    plist->head = (Node*)malloc(sizeof(Node));  // 더미 노드의 생성 (머리)
    plist->tail = (Node*)malloc(sizeof(Node));  // 더미 노드의 생성 (꼬리)

    plist->head->prev = NULL;
    plist->head->next = plist->tail;

    plist->tail->prev = plist->head;
    plist->tail->next = NULL;

    plist->numOfData = 0;
}

void LInsert(List* plist, LData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));  // 새 노드 작성
    newNode->data = data;  // 새 노드에 데이터 저장

    newNode->prev = plist->tail->prev;
    plist->tail->prev->next = newNode;

    newNode->next = plist->tail;
    plist->tail->prev = newNode;

    (plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata) {
    if (plist->head->next == NULL)  // 더미 노드가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->cur = plist->head->next;   // cur는 첫 번째 노드를 가리키게 함

    *pdata = plist->cur->data;  // 첫 번째 노드의 데이터를 전달
    return TRUE;  // 데이터 반환 성공
}

int LNext(List* plist, LData* pdata) {
    if (plist->cur->next == plist->tail)  // cur가 tail을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->cur = plist->cur->next;  // cur은 그 다음 노드를 가리킴

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 전달
    return TRUE;  // 데이터 반환 성공
}

LData LRemove(List* plist) {
    Node* rpos = plist->cur;   // 삭제 대상의 주소 값을 rpos에 저장
    LData rdata = rpos->data;  // 삭제 대상의 데이터를 rdata에 저장

    plist->cur->prev->next = plist->cur->next;  // 삭제 대상을 리스트에서 제거
    plist->cur->next->prev = plist->cur->prev;  // 삭제 대상을 리스트에서 제거

    plist->cur = plist->cur->prev;  // cur의 위치를 재조정

    free(rpos);  // 리스트에서 제거된 노드 메모리 해제
    (plist->numOfData)--;  // 저장된 데이터의 수 하나 감소
    return rdata;  // 제거된 노드의 데이터 반환
}

int LCount(List* plist) {
    return plist->numOfData;
}
