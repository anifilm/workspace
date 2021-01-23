#ifndef __DB_QUEUE_H__
#define __DB_QUEUE_H__
#include "Deque.h"

typedef Deque Queue;

void QueueInit(Queue* pq);           // 큐의 초기화
int QIsEmpty(Queue* pq);             // 큐가 비었는지 확인

void Enqueue(Queue* pq, Data data);  // enqueue 연산의 함수
Data Dequeue(Queue* pq);             // dequeue 연산의 함수
Data QPeek(Queue* pq);               // peek 연산의 함수

#endif
