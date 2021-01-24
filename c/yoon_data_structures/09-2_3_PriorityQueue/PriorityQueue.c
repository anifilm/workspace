// 제법 쓸만한 수준의 힘을 이용한 우선순위 큐의 구현
#include "PriorityQueue.h"
#include "UsefulHeap.h"

void PQueueInit(PQueue* ppq, PriorityComp pc) {
    HeapInit(ppq, pc);
}

int PQIsEmpty(PQueue* ppq) {
    return HIsEmpty(ppq);
}

void PEnqueue(PQueue* ppq, PQData data) {
    HInsert(ppq, data);
}

PQData PDequeue(PQueue* ppq) {
    return HDelete(ppq);
}
