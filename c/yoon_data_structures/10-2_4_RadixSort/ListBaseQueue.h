#ifndef __LB_QUEUE_H__
#define __LB_QUEUE_H__

#define TRUE   1
#define FALSE  0

typedef int Data;

typedef struct _node {
    Data data;
    struct _node* next;
} Node;

typedef struct _lqueue {
    Node* front;  // 큐의 시작 노드를 가리킴
    Node* rear;   // 큐의 끝 노드를 가리킴
} LQueue;

typedef LQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif
