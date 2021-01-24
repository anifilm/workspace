// 원리 이해 중심의 힙 구현: HDelete 함수에 대한 설명 중심으로
#include "SimpleHeap.h"

void HeapInit(Heap* ph) {  // 힙의 초기화
    ph->numOfData = 0;
}

int HIsEmpty(Heap* ph) {   // 힙이 비었는지 확인
    if (ph->numOfData == 0)
        return TRUE;
    else
        return FALSE;
}

int GetParantIDX(int idx) {  // 부모 노드의 인덱스 값 반환
    return idx / 2;
}

int GetLChildIDX(int idx) {  // 왼쪽 자식 노드의 인덱스 값 반환
    return idx * 2;
}

int GetRChildIDX(int idx) {  // 오른쪽 자식 노드의 인덱스 값 반환
    return GetLChildIDX(idx) + 1;
}

int GetHiPriCildIDX(Heap* ph, int idx) {  // 두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환
    if (GetLChildIDX(idx) > ph->numOfData)  // 자식 노드가 존재하지 않는다면,
        return 0;
    else if (GetLChildIDX(idx) == ph->numOfData)  // 자식 노드가 왼쪽 자식 노드 하나만 존재한다면,
        return GetLChildIDX(idx);
    else {                  // 자식 노드가 둘 다 존재한다면,
        if (ph->heapArr[GetLChildIDX(idx)].pr > ph->heapArr[GetRChildIDX(idx)].pr)  // 오른쪽 자식 노드의 우선순의가 높다면,
            return GetRChildIDX(idx);
        else                // 왼쪽 자식 노드의 우선순위가 높다면,
            return GetLChildIDX(idx);
    }
}

void HInsert(Heap* ph, HData data, Priority pr) {  // 힙에 데이터 저장
    int idx = ph->numOfData + 1;  // 새 노드가 저장될 인덱스 값을 idx에 저장
    HeapElem nelem = {pr, data};  // 새 노드의 생성 및 초기화

    // 새 노드가 저장될 위치가 루트 노드의 위치가 아니라면 while문 반복
    while (idx != 1) {
        // 새 노드와 부모 노드의 우선순위 비교
        if (pr < (ph->heapArr[GetParantIDX(idx)].pr)) {  // 새 노드의 우선순위가 높다면
            ph->heapArr[idx] = ph->heapArr[GetParantIDX(idx)];  // 부모 노드를 한 레벨 내림 (실제로 내림)
            idx = GetParantIDX(idx);  // 새 노드를 한 레벨 올림 (실제로 올리지는 않고 인덱스 값만 갱신)
        }
        else  // 새 노드의 우선순위가 높지 않다면
            break;
    }

    ph->heapArr[idx] = nelem;  // 새 노드를 배열에 저장
    ph->numOfData += 1;
}

HData HDelete(Heap* ph) {  // 힙에서 데이터 삭제
    HData retData = (ph->heapArr[1]).data;  // 반환을 위해서 삭제할 데이터 저장
    HeapElem lastElem = ph->heapArr[ph->numOfData];  // 힙의 마지막 노드 저장

    // 아래의 변수 parentIdx에는 마지막 노드가 저장될 위치정보가 담긴다.
    int parentIdx = 1;  // 루트 노드가 위치해야 할 인덱스 값 저장
    int childIdx;

    // 루트 노드의 우선순위가 높은 자식 노드를 시작으로 반복문 시작
    while (childIdx = GetHiPriCildIDX(ph, parentIdx)) {
        if (lastElem.pr <= ph->heapArr[childIdx].pr)  // 마지막 노드와 우선순위 비교
            break;
        // 마지막 노드보다 우선순위 높으니, 비교대상 노드의 위치를 한 레벨 올림
        ph->heapArr[parentIdx] = ph->heapArr[childIdx];
        parentIdx = childIdx;  // 마지막 노드가 저장될 위치정보를 한 레벨 내림
    }  // 반복문 탈출하면 parentIdx에는 마지막 노드의 위치정보가 저장됨

    ph->heapArr[parentIdx] = lastElem;  // 마지막 노드 최종 저장
    ph->numOfData -= 1;
    return retData;
}
