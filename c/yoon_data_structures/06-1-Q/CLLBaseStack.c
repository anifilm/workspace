#include <stdlib.h>
#include "CLinkedList.h"
#include "CLLBaseStack.h"

void StackInit(Stack* pstack) {  // 스택의 초기화
    pstack->plist = (List*)malloc(sizeof(List));
    ListInit(pstack->plist);
}

int SIsEmpty(Stack* pstack) {    // 스택이 비었는지 확인
    if (LCount(pstack->plist) == 0)  // 스택이 비었다면
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack* pstack, Data data) {  // 스택의 push 연산
    LInsertFront(pstack->plist, data);
}

Data SPop(Stack* pstack) {   // 스택의 pop 연산
    Data data;
    LFirst(pstack->plist, &data);
    LRemove(pstack->plist);
    return data;
}

Data SPeek(Stack* pstack) {  // 스택의 peek 연산
    Data data;
    LFirst(pstack->plist, &data);
    return data;
}
