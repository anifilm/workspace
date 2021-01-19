// 리스트에 구조체 변수 저장하기 1: 구조체 Point와 관련 함수들의 정의
#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
    int xpos;
    int ypos;
} Point;

// Point 변수의 xpos, ypos 값 설정
void SetPointPos(Point* ppos, int xpos, int ypos);

// Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Point* ppos);

// 두 Point 변수의 비교
int PointComp(Point* pos1, Point* pos2);

#endif
