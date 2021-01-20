// 정렬 기능이 추가된 연결 리스트의 구조체와 헤더파일의 정의
#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE  1
#define FALSE 0

typedef int LData;

typedef struct _node {
    LData data;
    struct _node* next;
} Node;

typedef struct _linkedlist {
    Node* head;  // 더미 노드를 가리키는 멤버
    Node* cur;   // 참조 및 삭제를 돕는 멤버
    Node* before;   // 삭제를 돕는 멤버
    int numOfData;  // 저장된 데이터의 수를 기록하기 위한 멤버
    int (*comp)(LData d1, LData d2);  // 정렬의 기준을 등록하기 위한 멤법
} LinkedList;

typedef LinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

void FInsert(List* plist, LData data);
void SInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));

#endif
