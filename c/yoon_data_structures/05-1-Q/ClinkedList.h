// 변형된 원형 연결 리스트의 헤더파일
#ifndef __C_LINKED_LIST_H__
#define __C_LINKED_LIST_H__
#include "Employee.h"

#define TRUE  1
#define FALSE 0

typedef Employee* LData;

typedef struct _node {
    LData data;
    struct _node* next;
} Node;

typedef struct _linkedList {
    Node* tail;  // 꼬리 노드를 가리키는 멤버
    Node* cur;   // 참조 및 삭제를 돕는 멤버
    Node* before;   // 삭제를 돕는 멤버
    int numOfData;  // 저장된 데이터의 수를 기록하기 위한 멤버
} CList;

typedef CList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);       // 꼬리에 노드를 추가
void LInsertFront(List* plist, LData data);  // 머리에 노드를 추가

int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

#endif
