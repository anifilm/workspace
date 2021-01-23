// 연결 리스트 기반 큐의 구현
#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue* pq) {
    pq->front = pq->rear = NULL;
}

int QIsEmpty(Queue* pq) {
    if (pq->front == NULL)  // front가 NULL이면,
        return TRUE;        // 큐가 비어있으니 TRUE를 반환
    else
        return FALSE;
}

void Enqueue(Queue* pq, Data data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;

    if (QIsEmpty(pq)) {  // 첫 번째 노드 추가라면,
        pq->front = newNode;  // front가 새 노드를 가라키게 하고,
        pq->rear = newNode;   // rear도 새 노드를 가리키게 한다.
    }
    else {               // 두 번째 노드 추가라면,
        pq->rear->next = newNode;  // 마지막 노드가 새 노드를 가리키게 하고,
        pq->rear = newNode;        // rear가 새 노드를 가리키게 한다.
    }
}

Data Dequeue(Queue* pq) {
    Node* delNode;
    Data retData;

    if (QIsEmpty(pq)) {
        printf("Queue Memory Error!");
        exit(-1);
    }

    delNode = pq->front;          // 삭제할 노드의 주소 값 저장
    retData = delNode->data;      // 삭제할 노드가 지닌 값 저장
    pq->front = pq->front->next;  // 삭제할 노드의 다음 노드를 front가 가리킴

    free(delNode);
    return retData;
}

Data QPeek(Queue* pq) {
    if (QIsEmpty(pq)) {
        printf("Queue Memory Error!");
        exit(-1);
    }

    return pq->front->data;
}
