// 함수의 인자로 전달되고 return문에 의해 반환되는 구조체 변수
// 구조체 변수를 대상으로 하는 Call-by-reference
#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

void OrgSymTrans(Point* ptr) {  // 원점 대칭
    ptr->xpos = ptr->xpos * -1;
    ptr->ypos = ptr->ypos * -1;
}

void ShowPosition(Point pos) {
    printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main() {

    Point pos = {7, -5};

    OrgSymTrans(&pos);  // pos의 값을 원점 대칭 이동시킨다.
    ShowPosition(pos);

    OrgSymTrans(&pos);  // pos의 값을 원점 대칭 이동시킨다.
    ShowPosition(pos);

    return 0;
}
