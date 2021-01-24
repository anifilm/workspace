// 양방향 연결 리스트의 구현
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List* plist) {
    plist->head = NULL;
    plist->numOfData = 0;
}

void LInsert(List* plist, LData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));  // 새 노드 작성
    newNode->data = data;  // 새 노드에 데이터 저장

    newNode->next = plist->head;  // 첫 번째 노드 추가시, 새 노드의 next를 NULL로 초기화 (이 문장에서 plist->head는 NULL이다.)
                                  // 두 번째 이후 노드 추가시, 새 노드가 기존 노드를 가리키게 한다.
    if (plist->head != NULL)  // 두 번째 이후 노드 추가시
        plist->head->prev = newNode;  // 기존 노드가 새 노드를 가리키게 함

    newNode->prev = NULL;   // 새 노드의 prev를 NULL 저장
    plist->head = newNode;  // 포인터 변수 head가 새 노드를 가리키게 함

    (plist->numOfData)++;   // 저장된 노드의 수를 하나 증가시킴
}

int LFirst(List* plist, LData* pdata) {
    if (plist->head == NULL)  // 더미 노드가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->cur = plist->head;   // cur는 첫 번째 노드를 가리키게 함

    *pdata = plist->cur->data;  // 첫 번째 노드의 데이터를 전달
    return TRUE;  // 데이터 반환 성공
}

int LNext(List* plist, LData* pdata) {
    if (plist->cur->next == NULL)  // cur가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->cur = plist->cur->next;  // cur은 그 다음 노드를 가리킴 (오른쪽으로 이동)

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 전달
    return TRUE;  // 데이터 반환 성공
}

int LPrevious(List* plist, LData* pdata) {
    if (plist->cur->prev == NULL)  // cur가 NULL을 가리킨다면,
        return FALSE;  // 반환할 데이터가 없다.

    plist->cur = plist->cur->prev;  // cur은 그 이전 노드를 가리킴 (왼쪽으로 이동)

    *pdata = plist->cur->data;  // cur가 가리키는 노드의 데이터 전달
    return TRUE;  // 데이터 반환 성공
}

int LCount(List* plist) {
    return plist->numOfData;
}
