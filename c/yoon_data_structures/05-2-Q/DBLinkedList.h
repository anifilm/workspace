#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE  1
#define FALSE 0

typedef int LData;

typedef struct _node {
    LData data;
    struct _node* next;  // 오른쪽 노드를 가리키는 포인터 변수
    struct _node* prev;  // 왼쪽 노드를 가리키는 포인터 변수
} Node;

typedef struct _dblinkedList {
    Node* head;  // 더미 노드를 가리키는 멤버 (머리)
    Node* tail;  // 더미 노드를 가리키는 멤버 (꼬리)
    Node* cur;   // 참조 및 삭제를 돕는 멤버
    int numOfData;  // 저장된 데이터의 수를 기록하기 위한 멤버
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

#endif
