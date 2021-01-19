// 리스트에 구조체 변수 저장하기 1: 구조체 Point와 관련 함수들의 정의
#include <stdio.h>
#include "Point.h"

// Point 변수의 xpos, ypos 값 설정
void SetPointPos(Point* ppos, int xpos, int ypos) {
    ppos->xpos = xpos;
    ppos->ypos = ypos;
}

// Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Point* ppos) {
    printf("[%d, %d]\n", ppos->xpos, ppos->ypos);
}

// 두 Point 변수의 비교
int PointComp(Point* pos1, Point* pos2) {
    if (pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)  // 두 Point 변수의 멤버가 모두 같으면 0 반환
        return 0;
    else if (pos1->xpos == pos2->xpos)  // 두 Point 변수의 멤버 xpos만 같으면 1 반환
        return 1;
    else if (pos1->ypos == pos2->ypos)  // 두 Point 변수의 멤버 ypos만 같으면 2 반환
        return 2;
    else
        return -1;  // 두 Point 변수의 멤버가 모두 다르면 -1 반환
}
