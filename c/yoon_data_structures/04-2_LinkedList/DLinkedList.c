// 더미 노드(Dummy Node) 기반의 단순 연결 리스트 구현
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List* plist) {
    plist->head = (Node*)malloc(sizeof(Node));  // 더미 노드의 생성
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

void LInsert(List* plist, LData data) {
    if (plist->comp == NULL)   // 정렬 기준이 마련되지 않았다면,
        FInsert(plist, data);  // 머리에 노드를 추가
    else                       // 정렬 기준이 마련되었다면,
        SInsert(plist, data);  // 정렬 기준에 근거하여 노드를 추가
}

// 머리에 노드를 추가
void FInsert(List* plist, LData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));  // 새 노드 작성
    newNode->data = data;  // 새 노드에 데이터 저장

    newNode->next = plist->head->next;  // 새 노드가 다른 노드를 가리키게 함
    plist->head->next = newNode;  // 더미 노드가 새 노드를 가라키게 함

    (plist->numOfData)++;  // 저장된 노드의 수를 하나 증가시킴
}

// 정렬 기준에 근거하여 노드를 추가
void SInsert(List* plist, LData data) {
    // 04-3에서 추가 예정
}

int LFirst(List* plist, LData* pdata) {
    if (plist->head->next == NULL)  // 더미 노드가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->before = plist->head;     // before는 더미 노드를 가리키게 함
    plist->cur = plist->head->next;  // cur는 첫 번째 노드를 가리키게 함

    *pdata = plist->cur->data;  // 첫 번째 노드의 데이터를 전달
    return TRUE;  // 데이터 반환 성공
}

int LNext(List* plist, LData* pdata) {
    if (plist->cur->next == NULL)  // cur가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->before = plist->cur;     // cur가 가리키던 것을 before가 가리킴
    plist->cur = plist->cur->next;  // cur은 그 다음 노드를 기리킴

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 전달
    return TRUE;  // 데이터 반환 성공
}

LData LRemove(List* plist) {
    Node* rpos = plist->cur;   // 삭제 대상의 주소 값을 rpos에 저장
    LData rdata = rpos->data;  // 삭제 대상의 데이터를 rdata에 저장

    plist->before->next = plist->cur->next;  // 삭제 대상을 리스트에서 제거
    plist->cur = plist->before;  // cur가 가리키는 위치를 재조정

    free(rpos);  // 리스트에서 제거된 노드 메모리 해제
    (plist->numOfData)--;  // 저장된 데이터의 수 하나 감소
    return rdata;  // 제거된 노드의 데이터 반환
}

int LCount(List* plist) {
    return plist->numOfData;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)) {
    // 04-3에서 추가 예정
}
