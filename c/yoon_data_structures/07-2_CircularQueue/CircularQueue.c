// 원형 큐(Circular Queue)의 구현
#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

void QueueInit(Queue* pq) {
    pq->front = pq->rear = 0;
}

int QIsEmpty(Queue* pq) {
    if (pq->front == pq->rear)  // 큐가 비어있다면
        return TRUE;
    else
        return FALSE;
}

int NextPosIdx(int pos) {
    if (pos == QUE_LEN - 1)  // 배열의 마지막 요소의 인덱스 값이면
        return 0;
    else
        return pos + 1;
}

void Enqueue(Queue* pq, Data data) {
    if (NextPosIdx(pq->rear) == pq->front) {  // 큐가 가득 찼다면
        printf("Queue Memory Error!");
        exit(-1);
    }

    pq->rear = NextPosIdx(pq->rear);  // rear를 한 칸 이동
    pq->queArr[pq->rear] = data;      // rear가 가리키는 곳에 데이터 저장
}

Data Dequeue(Queue* pq) {
    if (QIsEmpty(pq)) {
        printf("Queue Memory Error!");
        exit(-1);
    }

    pq->front = NextPosIdx(pq->front);  // front를 한 칸 이동
    return pq->queArr[pq->front];       // front가 가리키는 데이터 값 반환
}

Data QPeek(Queue* pq) {
    if (QIsEmpty(pq)) {
        printf("Queue Memory Error!");
        exit(-1);
    }

    return pq->queArr[NextPosIdx(pq->front)];
}
