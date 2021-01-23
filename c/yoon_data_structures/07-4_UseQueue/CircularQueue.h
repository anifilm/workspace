#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE       1
#define FALSE      0

#define QUE_LEN  100
typedef int Data;

typedef struct _cqueue {
    int front;  // 큐의 시작 인덱스를 가리킴
    int rear;   // 큐의 끝 인덱스를 가리킴
    Data queArr[QUE_LEN];
} CQueue;

typedef CQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

int NextPosIdx(int pos);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif
