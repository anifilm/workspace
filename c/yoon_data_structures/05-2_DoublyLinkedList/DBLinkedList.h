// 양방향 연결 리스트의 구현을 위한 헤더파일의 정의
#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE   1
#define FALSE  0

typedef int LData;

typedef struct _node {
    LData data;
    struct _node* next;  // 오른쪽 노드를 가리키는 포인터 변수
    struct _node* prev;  // 왼쪽 노드를 가리키는 포인터 변수
} Node;

typedef struct _dblinkedList {
    Node* head;  // 머리 노드를 가리키는 멤버
    Node* cur;   // 참조 및 삭제를 돕는 멤버
    int numOfData;  // 저장된 데이터의 수를 기록하기 위한 멤버
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
int LPrevious(List* plist, LData* pdata);

int LCount(List* plist);

#endif
