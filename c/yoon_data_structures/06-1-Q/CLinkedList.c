// 변형된 원형 연결 리스트의 구현
#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List* plist) {
    plist->tail = NULL;
    plist->cur = NULL;
    plist->before = NULL;
    plist->numOfData = 0;
}

void LInsertFront(List* plist, LData data) {  // 머리에 노드를 추가
    Node* newNode = (Node*)malloc(sizeof(Node));  // 새 노드 생성
    newNode->data = data;  // 새 노드에 데이터 저장

    if (plist->tail == NULL) {  // 첫 번째 노드라면,
        plist->tail = newNode;  // tail이 새 노드를 가리키게 한다.
        newNode->next = newNode;  // 새 노드 자신을 가리키게 한다.
    }
    else {  // 두 번째 이후 노드라면,
        newNode->next = plist->tail->next;  // 새 노드와 4가 저장된 노드 연결
        plist->tail->next = newNode;  // 2가 저장된 노드와 새 노드 연결
    }

    (plist->numOfData)++;
}

void LInsert(List* plist, LData data) {  // 꼬리에 노드를 추가
    Node* newNode = (Node*)malloc(sizeof(Node));  // 새 노드 생성
    newNode->data = data;  // 새 노드에 데이터 저장

    if (plist->tail == NULL) {  // 첫 번째 노드라면,
        plist->tail = newNode;  // tail이 새 노드를 가리키게 한다.
        newNode->next = newNode;  // 새 노드 자신을 가리키게 한다.
    }
    else {  // 두 번째 이후 노드라면,
        newNode->next = plist->tail->next;  // 새 노드와 4가 저장된 노드 연결
        plist->tail->next = newNode;  // 2가 저장된 노드와 새 노드 연결
        plist->tail = newNode;
    }

    (plist->numOfData)++;
}

int LFirst(List* plist, LData* pdata) {
    if (plist->tail == NULL)  // 저장된 노드가 없다면
        return FALSE;

    plist->before = plist->tail;     // before가 꼬리를 가리키게 함
    plist->cur = plist->tail->next;  // cur는 머리를 가리키게 함

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 반환
    return TRUE;
}

int LNext(List* plist, LData* pdata) {
    if (plist->tail == NULL)  // 저장된 노드가 없다면
        return FALSE;

    plist->before = plist->cur;     // before가 다음 노드를 가리키게 함
    plist->cur = plist->cur->next;  // cur는 다음 노드를 가리키게 함

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 반환
    return TRUE;
}

LData LRemove(List* plist) {
    Node* rpos = plist->cur;   // 삭제 대상의 주소 값을 rpos에 저장
    LData rdata = rpos->data;  // 삭제 대상의 데이터를 rdata에 저장

    if (rpos == plist->tail) {  // 삭제 대상을 tail이 가리킨다면
        if (plist->tail == plist->tail->next)  // 그리고 마지막 남은 노드라면
            plist->tail = NULL;
        else
            plist->tail = plist->before;
    }

    plist->before->next = plist->cur->next;  // 삭제 대상을 리스트에서 제거
    plist->cur = plist->before;  // cur가 가리키는 위치를 재조정

    free(rpos);  // 리스트에서 제거된 노드 메모리 해제
    (plist->numOfData)--;  // 저장된 데이터의 수 하나 감소
    return rdata;  // 제거된 노드의 데이터 반환
}

int LCount(List* plist) {
    return plist->numOfData;
}
