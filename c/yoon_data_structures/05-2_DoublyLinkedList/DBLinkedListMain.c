// 변형된 원형 연결 리스트의 구현
#include <stdio.h>
#include "DBLinkedList.h"

int main() {

    // 양방향 연결 리스트의 생성 및 초기화
    List list;
    int data;
    ListInit(&list);

    // 8개의 데이터 저장
    for (int i = 1; i < 9; i++)
        LInsert(&list, i);

    // 저장된 데이터의 조회
    if (LFirst(&list, &data)) {
        printf("%d ", data);

        // 오른쪽 노드로 이동하며 데이터 조회
        while (LNext(&list, &data))
        printf("%d ", data);

        // 왼쪽 노드로 이동하며 데이터 조회
        while (LPrevious(&list, &data))
            printf("%d ", data);
    }
    printf("\n");

    return 0;
}
