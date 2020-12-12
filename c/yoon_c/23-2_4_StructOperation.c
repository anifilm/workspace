// 구조체 변수를 대상으로 가능한 연산
#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

int main() {

    Point pos1 = {1, 2};
    Point pos2;
    pos2 = pos1;    // pos1의 멤버 대 pos2의 멤버간 복사가 진행됨

    printf("크기: %d\n", (int)sizeof(pos1));   // pos1의 전체 크기 반환
    printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("크기: %d\n", (int)sizeof(pos2));   // pos2의 전체 크기 반환
    printf("[%d, %d]\n", pos2.xpos, pos2.ypos);

    return 0;
}
