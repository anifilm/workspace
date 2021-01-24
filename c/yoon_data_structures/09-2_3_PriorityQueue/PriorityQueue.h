// 제법 쓸만한 수준의 힘을 이용한 우선순위 큐의 구현
#ifndef __PRIORITY_QUEUE_H__
#define __PRIORITY_QUEUE_H__
#include "UsefulHeap.h"

typedef Heap PQueue;
typedef HData PQData;

void PQueueInit(PQueue* ppq, PriorityComp pc);
int PQIsEmpty(PQueue* ppq);

void PEnqueue(PQueue* ppq, PQData data);
PQData PDequeue(PQueue* ppq);

#endif
