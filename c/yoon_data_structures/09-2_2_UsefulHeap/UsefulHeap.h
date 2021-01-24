// 제법 쓸만한 수준의 힙 구현
#ifndef __SIMPLE_HEAP_H__
#define __SIMPLE_HEAP_H__

#define TRUE   1
#define FALSE  0

#define HEAP_LEN  100
typedef char HData;
typedef int PriorityComp(HData d1, HData d2);

typedef struct _heap {
    PriorityComp* comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap* ph, PriorityComp pc);  // 힙의 초기화
int HIsEmpty(Heap* ph);   // 힙이 비었는지 확인

int GetParantIDX(int idx);  // 부모 노드의 인덱스 값 반환
int GetLChildIDX(int idx);  // 왼쪽 자식 노드의 인덱스 값 반환
int GetRChildIDX(int idx);  // 오른쪽 자식 노드의 인덱스 값 반환
int GetHiPriCildIDX(Heap* ph, int idx);  // 두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환

void HInsert(Heap* ph, HData data);  // 힙에 데이터 저장
HData HDelete(Heap* ph);  // 힙에서 데이터 삭제

#endif
