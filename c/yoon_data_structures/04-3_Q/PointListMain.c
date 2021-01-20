// 리스트에 구조체 변수 저장하기 2: 구조체 Point와 관련 함수들의 정의
#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "Point.h"

int main() {

    List list;
    Point compPos;
    Point* ppos;

    ListInit(&list);

    // 4개의 데이터를 저장
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);

    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &ppos)) {  // 첫 번째 데이터 조회
        ShowPointPos(ppos);

        while (LNext(&list, &ppos))  // 두번째 이후 데이터 조회
            ShowPointPos(ppos);
    }
    printf("\n");

    // xpos가 2인 모든 데이터 삭제
    compPos.xpos = 2;
    compPos.ypos = 0;

    if (LFirst(&list, &ppos)) {
        if (PointComp(ppos, &compPos) == 1) {
            ppos = LRemove(&list);
            free(ppos);
        }

        while (LNext(&list, &ppos)) {
            if (PointComp(ppos, &compPos) == 1) {
                ppos = LRemove(&list);
                free(ppos);
            }
        }
    }

    // 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수: %d\n", LCount(&list));

    if (LFirst(&list, &ppos)) {  // 첫 번째 데이터 조회
        ShowPointPos(ppos);

        while (LNext(&list, &ppos))  // 두번째 이후 데이터 조회
            ShowPointPos(ppos);
    }
    printf("\n");

    return 0;
}
